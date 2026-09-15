#include <iostream>
using namespace std;
int main(){
    int age;
    string name;

    cout<<"please enter your name" <<endl;
    cin>> name;
    
    cout<<"please enter age"; //if getline(variable name) is added-- gives a whole line like a sentence including space
    cin>>age;

    cout<<"hello "<<name<<" you are "<<age<< " years old ";
    

    return 0;
}
        //cin >> variable → reads one word/token, stops at whitespace
        //getline(cin, variable) → reads the whole line, including spaces, stops only at Enter.