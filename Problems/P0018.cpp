#include<iostream>

using namespace std;

int main() {

    cout<<"Enter three numbers"<<endl;
    int a, b, c;
    cin>>a>>b>>c;

    if(a<b && a<c) {

        cout<<a<<endl;
    } else if (b<c) {

        cout<<b<<endl;
    } else {

        cout<<c<<endl;
    }
    return 0;
}