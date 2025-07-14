#include<iostream>

using namespace std;

int main() {

    cout<<"Enter three numbers"<<endl;
    int a, b, c;
    cin>>a>>b>>c;

    if(a == b && a == c) {

        cout<<3<<endl;
    } else if (a == b || a == c || c == a) {

        cout<<2<<endl;
    } else {

        cout<<1<<endl;
    }
    return 0;
}