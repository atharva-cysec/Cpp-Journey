#include <iostream>
using namespace std;
int main(){
    string admin;
    string password;
    
    cout<<"Enter Usename"<<endl;
    cin>>admin;
    cout<<"Enter Password"<<endl;
    cin>>password;

    if(admin=="admin" && password=="1234"){
        cout<<"login successful"<<endl;
    }
     
    else{
        cout<<"login failed"<<endl;    
    }


}
