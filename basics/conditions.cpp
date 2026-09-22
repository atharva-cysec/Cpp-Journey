#include <iostream>
using namespace std;

int main(){
    int marks;
    cout << "please enter marks";
    cin>>marks;

    if(marks>=90){
        cout<<"You got A grade";
    }else if(marks>=75){
        cout<<"You got B grade";
    }else if(marks>=60){
        cout<<"You got C grade";
    }else{
        cout<<" ";
        
        return 0;
    }

}