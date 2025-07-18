/*
print X power Y using for loop  
*/
#include<iostream>

using namespace std;

int main(){

    int result = 1; 
    int x;
    int y;

    cin>>x>>y;
    
    for(int i = 0; i<y; i++) {

        result = result * x;

    }

    cout<<result<<endl;
    
    return 0;
}