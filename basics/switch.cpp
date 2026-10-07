#include <iostream>
using namespace std;
int main(){

    int first;
    int second;
    char oprator;

    cout<<"ENTER YOUR FIRST NUMBER"<<endl;
    cin>>first;

    cout<<"ENTER YOUR SECOND NUMBER"<<endl;
    cin>>second;

    cout<<"ENTER OPRATOR"<<endl;
    cin>>oprator;

    switch(oprator){

        case '+':
            cout<<"Result: "<<first + second<<endl;
            break;
          
        case '-':
            cout<<"Result: "<<first  - second<<endl;
            break;
        case '*':
            cout<<"Result: "<<first * second<<endl;
            break;

        case '/':
            cout<<"Result: "<<first / second<<endl;
            break;

        default:
            cout<<"Invalild Oprator";
            break;
             
    }
}
