#include <iostream>
using namespace std;
int main (){
    int age;
    string hasticket;

    cout<<"Enter Your Age"<<endl;
    cin>>age;
    cout<<"Do you have ticket yes/no"<<endl;
    cin>>hasticket;
    
    if(age>=18 && hasticket=="yes"){
        cout<<"You can enter the concert"<<endl;
}
    else{
        cout<<"You cannot enter your concert"<<endl;
    }
}