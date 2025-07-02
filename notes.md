
step1: save here in vs code
step2: git add .(to add the change in local)
step3: git status (to check the status)
step4: git commit -m (to save the changes to online github)
step5: git push (uploads the complete changes to the git hub)
NOTE: Follow these steps every time you did any change here



PROGRAMMING
Create a file of .cpp extension 
write ur desired code in that file
after that open terminal and use "g++ 'file name'" command to compile the program
the compiling will be completed and a new file (a.exe) will be created
to view the output of compiled program use ".\a.exe" command.

HOW TO WRITE A CODE
  #include<> is used to call any existed function of C++ to use in the present code
  run the "main() {}"function
  we have to return0 for the program to run correctly by using "int" before the main function
  inside the main function at last we have to give "return0;"
  standard template library - std:: 
  after taking std we can acces its inside functuions also it taken by "using namespace std" before main function
  then use the "cout<<"anything you want";
  Thats it you have done a program 
  then follow the compiling steps to bring output
#include<bits/stdc++.h>

using namespace std;

int main() {
    cout<<"HELLO IM SWANITEJ"<<endl;
    return 0;
}


Today i have learnt about comments and modules in C++ 
comments are negligeble in C++ those are not compiled by the compiler denoted by "//"
and if you wanted to make somme lines as a comment we have to use /* at the start and end with */
example program
#include<iostream>

using namespace std;

int main()  {
  cout<<"hello world";
  /* some comment
  some comment
  another comment*/cout<<"programming";
  cout<<"by swanitej";
  return0;
}

DATA TYPES: Data types can stored in different types, it can be a number,decimal number, boolean(true or false),binary number, characters(1,2,3,4,5,!,#,@,d,ty,r, etc...), strings(combination of characters) 

data types are of multiple types :
1. premitive
2. user defined
3. derived data types

Premitive data types(basic)

1. Integer : base 10 numbers(whole numbers)  : RANGE : -2,147,483,648 TO 2,147,483,648 SIZE: 4 bytes
2. Float : decimal numbers :RANGE :  -3.4x10^38 to 3.4x10^38 SIZE: 4 bytes
3. Boolean :True or False valur ; bool  : RANGE : True = 1, False = 0; SIZE: 1 byte
4. character :'1' , '2' , '3' , 'a' etc... : RANGE : -128 to 127 ; SIZE: 1 byte
5. string : multiple characters(sentences) ; "hello swanitej" 
6. long integer : long int SIZE: 8 bytes 
   long long integer : RANGE : -(2^63) to (2^63)-1 ; SIZE : 8 bytes
7. double : (large floating point number) : large decimal number: double  RANGE : -1.7x10^308 to 1.7x10^308 SIZE: 8 bytes 
8. void or valueless : void : 


VARIABLES ::
NAMED STORAGE MEMORY LOCATION
used to store data and can access data sometime in future

variables :
1. creating a variable (declaring a variable)
2. assinging a value to the variable (initialization/definition)

variable creation:

syntax = datatype nameofthevariable;   

-- mentioning the data type is mandatory in C++


naming a variable :
1. letters, numbers, underscore
2. variables name should not start with numbers (any letter starting are valid variable)
(a variable name starting with a number is invalid ex: 1over, 5game etc'...)
3. should not be a keyword (we should not use "namespace" again in the variable if used cpmpiler will be confused and gives error)
4. variables are case sensitive(ex: "a and A are different)

EXAMPLE : 

#include <iostream>

using namespace std;

int main() {

    int score;
    float overs;

    score = 180;
    overs = 16.4;

    score = score + 6;

    score = score + score + 6;

     cout<< overs ;

    return 0;
}



"<<endl;" in the code refers to switch to the next line


EXAMPLE FOR DATA TYPES :
#include<iostream>

using namespace std;

int main() {
    float a = 10.6;
    int b = 10;
    char ch = 'g';
    bool e = true;
    string str = "swanitej";
    cout << a << endl;
    cout << a+b <<endl;
    cout << ch << endl;
    cout << e << endl;
    cout << str << end;
    return 0;
}