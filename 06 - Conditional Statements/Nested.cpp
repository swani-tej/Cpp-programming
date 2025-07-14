/*
create a program to determine the shipping cost for an online store. The shipping cost depends 
on the weight of the package and the distance it needs ti travel.
Here are some rules : 

If the package weighs less than or = 1kg and the distance is less than 100km, the shipping
cost is 5$. 

If the package weighs less than or = 1kg and the distance is in between 100 to 500 km, the 
shipping cost is 10$.

If the package weighs less than or = 1kg and the distance is more tham 500 km, the shipping cost
is 15$

If the package weighs between 1kg and 5kg, the shipping cost is 20$ regardless of the distance. 

If the package weighs more than 5kg, the shipping cost is 30$ regardless of the distance. 

Write a program that prompts the user to enter the weight of the package and the distance it needs 
to travel, and then calculates and displays the shipping cost.

*/
#include<iostream>

using namespace std;

int main ()  {
    cout<<"Enter the weight and the distance of that material"<<endl;

    int weight, distance;

    cin>>weight>>distance;

    int cost;

    if(weight<=1) {
        if(distance<100) {
            cost = 5;
        }else if(distance>100 && distance<500){

            cost = 10;
        }else if (distance>500) {

            cost = 15;
        }
    } else if (weight>1 && weight<5) {

        cost = 20;
    }else if (weight>5) {

        cost = 30;
    }

    cout<<cost<<endl;
    return 0;
}