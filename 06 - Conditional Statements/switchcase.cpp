 #include<iostream>

using namespace std;

int main ()  {

        int a;

        cin>>a;

        switch(a) {
            case 50:
                cout<<"A"<<endl;
                break; 
            case 40:
                cout<<"B"<<endl;
                break;
            case 30:
                cout<<"C"<<endl;
                break;
            case 20:
                cout<<"D"<<endl;
                break;
            default :
                cout<<"E"<<endl;
        }

    return 0;
}