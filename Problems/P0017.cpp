#include<iostream>

using namespace std;

int main() {
    cout<<"Enter a value : "<<endl;
    int a;
    cin>>a;

    if(a>0) {

        cout<<1<<endl;
    }else if (a<0) {

        cout<<-1<<endl;

    } else if(a == 0) {

        cout<<0<<endl;
    }else {

        cout<<"Enter a numerical value only"<<endl;
    }
    

    return 0;
}