/* 
 *  AUTHOR : shashank singh shashank.personal@gmail.com 
 *  Description: well this program generates code for RDP project
 *  DATE : Sun Jul 10 12:33:41 IST 2011 [this is date when i wrote description]
 *  TECH : it has a lexer , syntatical checker and code generator , last two are infused into one
 *  License : WTF!! GPL :)
 */
#include <QApplication>
#include "lexer.h"

#define FILE_NAME "demo.def" //the file to read for definations

int main(int argc,char **argv)
{
QApplication app(argc,argv);
lexer lex;
lex.setCode("demo.def");
lex.analyse();
lex.print();
return 0;
}
