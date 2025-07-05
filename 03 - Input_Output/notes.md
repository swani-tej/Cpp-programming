Input: 

cin is used to read input stream.
cin uses >> operator, this operator is also called as extraction operator

cout is used to give value to a output stream.
cout uses << this operator, this operator is also called as insertion operator. 


#include<iostream>

using namespace std;

int main()  {
    string a = "ERROR";
    cout<< "Enter a string : ";

    cin >> a;

    cout<< a <<endl;
    return 0;
}