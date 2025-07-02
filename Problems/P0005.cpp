/*

CONVERTING A SMALL LETTER INTO A CAPTITAL LETTER 

IF I GAVE 'a' IT SHOULD RETURN 'A'


*/
#include<iostream>

using namespace std;


int main(){

  char ch = 'a';
  ch = ch - 32;

  cout<< ch <<endl;
  return 0;

}
/*
here we substracted 32 of ch because the ascii value of any letter's capital letter 
is less than its small number
likely we can substract any number from the character to get any other letter
*/