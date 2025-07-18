/*
For given rows and coloumns print in the following order
rows : 4
columns : 5

*****
*****
*****
***** 


*/

#include<bits/stdc++.h>

using namespace std;

int main() {

    int rows;
    int columns;
    cin>>rows>>columns;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {

            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}