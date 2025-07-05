#include<iostream>

using namespace std;

int main(){
    cout<< "Enter length and breadth to find the area : ";

    int length = 0;
    int breadth = 0;

    cin>>length>>breadth;
    int area;
    area = length*breadth;
    
    cout<<  area << endl;
    return 0;

}