#include <iostream>
using namespace std;
int main (){

  //   int i=1;
  //   while(i<=10){
  //     cout<<" "<<i<<endl;
  //     i++;
  //   }


  // int a=1;
  //   do {
  //       cout<<"enter positive no"<<endl;
  //       cin>>a;
  //   }while(a<=0);
  //   cout<<"the no is "<<a;

  // int b=0;
  // int a=1;
  //   do{
  //      cout<<"enter the no "<<endl;
  //      cin>>a;
  //      b +=a;
  //   }while(a!=0);
  //   cout<<"The sum is "<<b<<endl;



    int n=1;
    int i=0;
    cout<<"enter the number to count the digits "<<endl;
    cin>>n;
    
    do{ n/= 10;

       i++;

    }while(n!=0);

    cout<<"The given number has "<<i<<" digits";
  
}