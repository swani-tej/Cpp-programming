Input: 

cin is used to read input stream.
cin uses >> operator, this operator is also called as extraction operator



#include<iostream>

using namespace std;

int main()  {
    string a = "ERROR";
    cout<< "Enter a string : ";

    cin >> a;

    cout<< a <<endl;
    return 0;
}


cout is used to give value to a output stream.
cout uses << this operator, this operator is also called as insertion operator.

endl : can be used to end a line(skips to next line)

"\n" : behaves similar to endl

"\" is used to escape a character

Escape character is a character that is used to skip any character that is next to it.

\"

\\

"\t" is the tab character