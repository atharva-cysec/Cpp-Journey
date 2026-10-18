#include <iostream>
using namespace std;
int main(){
    int factorial=1;
    int n;

    cout<<"Enter number to find out factorial ";
    cin>>n;
    
for(int i=n; i>=1; i--){
    factorial *=i;
} cout<<"Factorial of "<<n<<" is "<<factorial<<endl;
}