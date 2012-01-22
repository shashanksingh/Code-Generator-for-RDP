#include <QObject>
#include <QList>
#include <QHash>
#include <QStringList>
#include <QStringListIterator>
#include <QFile>
#include <QDir>
#include <QRegExp>
#include <QDebug>
#define STYLE_SPACE_IN_HEADER "\t" //this flag is or style and define how many space before decalration in header
#define SPACE "\n"
#define SPACE_BETWEEN_FUNCTION_BLOCKS "\n"
#define SPACE_BETWEEN_FUNCTIONS_DEFINATION_BLOCKS "\n"
class lexer
{
public:
void setCode(const QString &);
void setTestCode();//set the test code
void analyse();
void print();



private:
QHash<QString , QList<QString> > m_token;
QString m_code;//has whole code from m_inputFile
QByteArray m_publicCode;//well stores code that goes into public part
QByteArray m_privateCode;//stores that goes into private part of class
QByteArray m_protectedCode;//stores code that goes into protected part of class
QFile m_inputFile;//input file
QFile m_file_h; //for header file
QFile m_file_cpp; //for cpp file
QString className;//stores class names
};
