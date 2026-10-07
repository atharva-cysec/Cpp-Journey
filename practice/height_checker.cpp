#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    string name;
    double height;
 
    cout<<"Please enter your full name"<<endl;
    getline(cin, name);
    
    cout<<"Please enter your height in meters"<<endl;
    cin>>height;
    cout<<fixed<<setprecision(2)<<"Your height is "<<height<<endl;
    cout<<"Your full name is "<<name<<endl;

if(height>1.5){
    cout<<"you are eligible for ride"<<endl;
}
else{
    cout<<"Not eligible"<<endl;
}
}