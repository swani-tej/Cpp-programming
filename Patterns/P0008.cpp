/*
For given rows print in the following order
rows : 7
1
21
321
4321
54321
654321
7654321


*/

#include<bits/stdc++.h>

using namespace std;

int main() {

    int rows;
    cin>>rows;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j <= i; j++) {
            cout<<i - j + 1;
        }

        cout<<endl;
    }

    return 0;
}