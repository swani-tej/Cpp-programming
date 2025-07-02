/*
Average of numbers :

example:

2
3
4

Ans: 4.5

*/
#include<iostream>

using namespace std;

int main(){

    int a = 2;
    int b = 4;
    int c = 4;
    float d;
    d = (a+b+c)/3.0;
    
    
    cout<< d << endl;
    return 0;

}
/*
if you want the accurate values means 
example:
(2+4+4)/3 will be 3.333....
but if you code this it will show only 3

to get the accurate value we need to give a 
float denominator or a numerator.
And if you assing it to a new variable , we need to
keep that variable as a float.

*/