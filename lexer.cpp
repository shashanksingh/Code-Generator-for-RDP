/*  
 *The program has three blocks 
 * [1] "{" block
 * [2] variable declration block
 * [3] "}" block
*/
#include "lexer.h"


void lexer::setCode(const QString & code)
{
m_inputFile.setFileName(code);
m_inputFile.open(QIODevice::ReadWrite | QIODevice::Text);
m_code=m_inputFile.readAll();
//qDebug()<<m_code;
}

void lexer::setTestCode()
{
m_code = QString ("class INLINECLASS { int a }");
}

void lexer::analyse()
{
/*tokenizer*/
QStringList results = m_code.split(QRegExp("[\\n\\s]"),QString::SkipEmptyParts); //our lexer uses regexp 
//qDebug()<<__func__<<results;
/* end of tokenizer */



int i=0;
for(i=0;i<results.size();i++)
{

/*syntatical analysis : main analysing code*/

if(results[i]=="class")
	{
	QList <QString> temp;
	temp.append(results[++i]);
	m_token.insert(QString("Class"),temp);

    className=results[i];//well we know class nams is next to class noun

    /* MAKE file now */
    QDir::setCurrent("generated/");//setting directory tp be generated

    m_file_h.setFileName(className+".h"); //setting file name to class name
    m_file_cpp.setFileName(className+".cpp");//setting file name to class names

    m_file_h.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Truncate);
    m_file_cpp.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Truncate);

   /*  write the code into bytearray */
    QByteArray headerWrite,sourceWrite;
    headerWrite.append("/*\n");
    headerWrite.append(" * =====================================================================================\n *\n *       Filename:  ");
    headerWrite.append(className);
    headerWrite.append(".h\n *\n *        Version:  1.0\n *        Created:  25/06/2011 06:54:53 PM\n *       Revision:  none\n *       Compiler:  gcc\n *\n *         Author:\n *        Company:  Devon IT\n *\n * =====================================================================================\n */\n\n");
    headerWrite.append("#ifndef ");
    headerWrite.append(className);
    headerWrite.append("_H\n");
    headerWrite.append("#define ");
    headerWrite.append(className);
    headerWrite.append("_H\n\n");
    headerWrite.append("class ");
    headerWrite.append(className);//actual naming starts here like class ABCD
    sourceWrite.append("/*\n");
    sourceWrite.append(" * =====================================================================================\n *\n *       Filename:  ");
    sourceWrite.append(className);
    sourceWrite.append(".cpp\n *\n *        Version:  1.0\n *        Created:  25/06/2011 06:54:53 PM\n *       Revision:  none\n *       Compiler:  gcc\n *\n *         Author:\n *        Company:  Devon IT\n *\n * =====================================================================================\n */\n\n");
    sourceWrite.append("#include \""+className+".h\"\n");//#include "classname.h"
    sourceWrite.append(SPACE);
    sourceWrite.append(className+"::"+className+"() \n{\n}\n");//defination of constructor
    sourceWrite.append(SPACE_BETWEEN_FUNCTIONS_DEFINATION_BLOCKS);//well add space
    sourceWrite.append(className+"::"+"~"+className+"() \n{\n}\n");//defination of destructor
    sourceWrite.append(SPACE_BETWEEN_FUNCTIONS_DEFINATION_BLOCKS);//well add space


   /* finally writing to disk */ 
   m_file_h.write(headerWrite);
    m_file_cpp.write(sourceWrite);
	}
else
if( results[i]=="{")
	{
	QList<QString>temp;
	temp.append("");
	m_token.insert(QString("{"),temp);

   /*  write the code into bytearray */
    QByteArray headerWrite,sourceWrite;
    headerWrite.append("\n{\n\n");//{
    
    m_publicCode.append(STYLE_SPACE_IN_HEADER);//adding sutiable space as per style defined 
    m_publicCode.append(className+"();\n");//declration of constructor in header 
    m_publicCode.append(STYLE_SPACE_IN_HEADER);//adding sutiable space as per style defined 
    m_publicCode.append("~"+className+"();\n");//declaration of constructor in header

    /* finally write it to disk */ 
    m_file_h.write(headerWrite);
    m_file_cpp.write(sourceWrite);
 
	}
else
if(results[i]=="}" )
        {
        QList<QString>temp;
        m_token.insert(QString("}"),temp);
       /*  write the code into bytearray */
       QByteArray headerWrite,sourceWrite;

       headerWrite.append("\npublic:\n");  
       headerWrite.append(m_publicCode);//add the public code
       headerWrite.append(SPACE_BETWEEN_FUNCTION_BLOCKS);
       headerWrite.append(STYLE_SPACE_IN_HEADER);//\t
       headerWrite.append("QByteArray getBytes();");//getbytes declration
       headerWrite.append(SPACE);//\n
       headerWrite.append(STYLE_SPACE_IN_HEADER);//\t
       headerWrite.append("void parse(const QByteArray & packet);");//parse() 
 
       headerWrite.append("\nprivate:\n");
       headerWrite.append(SPACE);//adding sutiable space as per style defined 
       headerWrite.append(m_privateCode);

       headerWrite.append("\nprotected:\n");
       headerWrite.append(SPACE);//adding sutiable space as per style defined 
       headerWrite.append(m_protectedCode);

       headerWrite.append("\n};\n\n");//};
       headerWrite.append("#endif");
       
       sourceWrite.append("void "+className+"::parse(const QByteArray & packet) \n{\n}\n");//parse defination
       sourceWrite.append(SPACE_BETWEEN_FUNCTIONS_DEFINATION_BLOCKS);//well add space
       sourceWrite.append("QByteArray "+className+"::getBytes() \n{\n}\n" );//get bytes defination
       sourceWrite.append(SPACE_BETWEEN_FUNCTIONS_DEFINATION_BLOCKS);//well add space
 
       /*  write the code into files */
        m_file_h.write(headerWrite);
        m_file_cpp.write(sourceWrite);
       /* emptying the stuff that is iside member variable , aka preparing for next class decelragtion*/
        m_publicCode.clear();
        m_privateCode.clear();
        m_protectedCode.clear();
        m_file_h.close();
        m_file_cpp.close();
        qDebug()<<"Parsing finshed .....\n";
        qDebug()<<"Code generated for class "<<className<<" inside directory generated/";
        className.clear();
        }
else
if(results[i]=="#")
{
//qDebug()<<__LINE__<<results[++i];
//TODO comment handling will come pretty later
}
else
	{
        QList <QString> temp;
	    int j=i+1;
        temp.append(results[j]);
        m_token.insert(results[i],temp);
//        qDebug()<<__LINE__<<results[i]<<results[j];
       
        QString memberVar , memberVarType;
        memberVar=results[j];
        memberVarType=results[i];
//        qDebug()<<__func__<<memberVarType<<memberVar;
       
        /*  write the code into bytearray */
        QByteArray headerWrite,sourceWrite;
        m_publicCode.append(SPACE_BETWEEN_FUNCTION_BLOCKS);
        m_publicCode.append(STYLE_SPACE_IN_HEADER);//adding sutiable spaces as per our coding style
        m_publicCode.append(memberVarType+" get"+memberVar+"();");//adding getterfor member function,decelration
        m_publicCode.append(SPACE);
       
        m_publicCode.append(STYLE_SPACE_IN_HEADER);//adding sutiable spaces as per our coding style
        m_publicCode.append("void set"+memberVar+"("+memberVarType+" value );");//adding setter for member function,decelration
        m_publicCode.append(SPACE);
        
        m_privateCode.append(STYLE_SPACE_IN_HEADER);//adding sutiable spaces as per our coding style
        m_privateCode.append(memberVarType+" m_"+memberVar+";");//declration of member variables
        m_privateCode.append(SPACE);
    
        sourceWrite.append(SPACE_BETWEEN_FUNCTIONS_DEFINATION_BLOCKS);//well add space
        sourceWrite.append(memberVarType+" " +className+":: get"+memberVar+"()");//getter  member variable defination stub
        sourceWrite.append("\n{\n");// space { space }
	sourceWrite.append("	return m_"+memberVar+";\n}\n");
        sourceWrite.append(SPACE_BETWEEN_FUNCTIONS_DEFINATION_BLOCKS);//well add space
        sourceWrite.append("void " +className+":: set"+memberVar+"(const "+memberVarType +" & value)");//getter  member variable defination stub
        sourceWrite.append("\n{\n");// space { space }
	sourceWrite.append("	m_"+memberVar+" = value;\n}\n");
 

        //FIXME dont write to files here , rather write to m_publicCode, m_protectedCode,m_privateCode; all these variables will be reassembled in"}" section 
        //and then empty them for next class 
        /*  write the code into files */
        m_file_h.write(headerWrite);
        m_file_cpp.write(sourceWrite);
 	i++;
	}

}
//qDebug()<<__func__<<m_token;
}

void lexer::print()
{
}
