#include<iostream>

using namespace std;

int main() {
    cout<<"Enter a value : "<<endl;
    int a;
    cin>>a;

   if(a%4 == 0 && a%100 != 0) {

    cout<<"LEAP"<<endl;
   } else if(a%400 == 0) {

    cout<<"LEAP"<<endl;
   }else {

    cout<<"COMMON"<<endl;
   }

    return 0;
}