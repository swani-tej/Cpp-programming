#include<iostream>

using namespace std;

int main ()  {
    int age;

    cout<<"Enter the age of the person : "<<endl;

    cin>>age;

    string isEligibleToVote;
    string isATeenager;

    isEligibleToVote = (18<=age)? "the person is eligible to vote":  "the person is not eligible to vote";
    isATeenager = ((age>=13) && (age<18)) ? "He is a teenager": "He is not a teenager";
    cout<<isEligibleToVote<<endl;
    cout<<isATeenager<<endl;
    return 0;
}