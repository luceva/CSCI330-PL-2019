#ifndef PARSER_H
#define PARSER_H  

/**   Name: Paul Talaga
      Date: Oct 16, 2019
      Desc: Class to recognize and parse a language.  See Parser.cpp for language specifics.
      */

#include <string>

using namespace std;


class Parser{
public:
  

  Parser();
  
  
  bool evaluate(string s);

  bool A(string s);
  bool B(string s);
};
  
#endif