/*
CONVERTING UPPERCASE LETTERS INTO LOWER CASE LETTERS

IF I HAVE GIVEN 'A' IT SHOULD GIVE 'a'
 
NOW WE SHOULD ADD 32 TO GET A SMALL LETTER
*/


#include<iostream>

using namespace std;

int main(){

    char ch = 'B';
    ch = ch + 32;

    cout<< ch <<endl;
    return 0;

}