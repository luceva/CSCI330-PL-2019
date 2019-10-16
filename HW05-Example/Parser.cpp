/*
  Name: Paul Talaga
  Desc: Returns true if the string given is part of the language:
        L0: (01) an even number of times(0,2,4,6,...)
*/

#include <string>
#include <iostream>

#include "Parser.h"


using namespace std;

Parser::Parser(){
  // Need this even if it doesn't do anything.
}

bool Parser::evaluate(string s){
  return A(s);
}

// A -> 01A
bool Parser::A(string s){
  if(s.length() == 0)return true;
  if(s.length() >= 2 && s.substr(0,2) == "01")return B(s.substr(2));
  return false;
}

// B -> 01B
bool Parser::B(string s){
  if(s.length() >= 2 && s.substr(0,2) == "01")return A(s.substr(2));
  return false;
}


