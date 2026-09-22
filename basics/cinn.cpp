#include <iostream>
using namespace std;
int main(){
    int age;
    string name;
    string full_name;

    cout<<"please enter your name" <<endl;
    cin>> name;                             //cin >> variable → reads one word/token, stops at whitespace
    
    cout<<"please enter age";               //if getline(variable name) is added-- gives a whole line like a sentence including space
    cin>>age;

    cout<<"hello "<<name<<" you are "<<age<< " years old "<<endl;

    cout<<"enter your full name"<<endl;
    cin.ignore();                          //clears leftover Enter left by cin>>, so getline() doesn't skip input
    getline(cin,full_name);                //getline(cin, variable) → reads the whole line, including spaces, stops only at Enter.
    
    cout<<"your full name is "<<full_name<<endl;

    return 0;
 }
       
       