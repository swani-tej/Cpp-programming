/*
For given rows print in the following order
rows : 7
1
22
333
4444
55555
666666
7777777 


*/

#include<bits/stdc++.h>

using namespace std;

int main() {

    int rows;
    cin>>rows;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j <=i; j++) {

            cout<<i+1;
        }

        cout<<endl;
    }

    return 0;
}