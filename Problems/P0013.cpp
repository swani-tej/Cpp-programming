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
    else{


        cout<<"Invalid option choose the correct one"<<endl;
    }

    return 0;
}