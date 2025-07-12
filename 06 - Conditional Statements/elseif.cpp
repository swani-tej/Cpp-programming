 #include<iostream>

using namespace std;

int main ()  {

    int a;

    cout<<"Enter the age : "<<endl;

    cin>>a;

    if(a<13) {

        cout<<"Toddeler"<<endl;
    }
    else if(a>=13 && a<18){

        cout<<"The person is a teenager"<<endl;

    }
    else if (a>=18 && a<=60){

        cout<<"He is a adult"<<endl;

    }
    else {

        cout<<"He is a senior citizen"<<endl;
    }

    return 0;
}