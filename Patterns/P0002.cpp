/*
For given rows print in the following order
rows : 5

*
**
***
****
*****


*/

#include<bits/stdc++.h>

using namespace std;

int main() {

    int rows;
    cin>>rows;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j <= i; j++) {

            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}