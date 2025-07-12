/*calculator

welcome to swanitej's calculator

a. Additon
b. Substraction
c. Multiplication
d. Division

Select any option :

Enter two numbers :

Addition is :


*/

#include<iostream>

using namespace std;

int main(){
    cout<<"HERE IT IS A CALCULATOR"<<endl;
    cout<<"a. Additon"<<endl;
    cout<<"b. Substraction"<<endl;
    cout<<"c. Multiplication"<<endl;
    cout<<"d. Division"<<endl;
    cout<<"Select any Option"<<endl;

    char Option;

    cin>>Option;

    cout<<"enter first number"<<endl;
    cout<<"enter second number"<<endl;

    int num1, num2;

    cin>>num1>>num2;
    
    cout<<"Selected option is : "<<Option<<" , "<<"Numbers are : "<<num1<<"  "<<num2<<endl;


    if(Option == 'a') {

        cout<<"Addition is : "<<num1+num2<<endl;
    }

    if(Option == 'b') {

        cout<<"Substraction is : "<<num1-num2<<endl;
    }
    
    if(Option == 'c') {

        cout<<"Multiplication is : "<<num1*num2<<endl;
    }
    
    if(Option == 'd') {

        cout<<"Division is : "<<num1/num2<<endl;
    }


    return 0;
}