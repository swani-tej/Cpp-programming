/*
For given rows print in the following order
rows : 7
1
12
123
1234
12345
123456
1234567


*/

#include<bits/stdc++.h>

using namespace std;

int main() {

    int rows;
    cin>>rows;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j <= i; j++) {
            cout<<j + 1;
        }

        cout<<endl;
    }

    return 0;
}