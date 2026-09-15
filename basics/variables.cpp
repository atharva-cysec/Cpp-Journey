#include <iostream>
#include <iomanip>                   //{iomanip}-input/output manipulator is used to set the precision of decimal values 
using namespace std;
int main(){
   int age=21;                       // int is used for whole values
   cout<<age<<endl;

  
   float weight= 55.5;               // float is used for decimal values upto 7 significant digits decimal
   cout<<weight<<endl; 


   double value_of_pi= 3.14122334455;// double is used for decimal values upto 16 significant digits decimal
   cout << setprecision(12) << value_of_pi << endl; // once setprecision is set, it will be applied to all subsequent decimal values in the program unless changed again.
   cout << setprecision(5) << 7.0<< endl;          // 7 (zero stripped)


   char grade='A';                   // char is used for single character values following single quotes('')
   cout<<grade<<endl;
   

   bool isAdult=true;                 // bool is used for boolean values (true or false)
   bool power=false;                                                    
   cout<<power<<endl;
   cout<<isAdult<<endl;  


   string name = "broo";    //String is used for string values following double quotes("")
   string food = "pizza";
   string drink = "diet coke";
   cout<<"hello "<<name<<endl;   
   cout<<"you like "<<food;
   cout<<" and "<<drink<<endl;                


   // fixed + setprecision(n) — shows(FORCES) exactly n digits AFTER decimal, always
   cout << fixed << setprecision(2) << 7.0<< endl;

   //setw(n) — sets fixed WIDTH for the value only (right-aligned, space-padded by default)-must repeat before every value
   cout << setw(10) << 42 << 7<< endl;

   cout << setfill('*') << setw(10) << 42<< endl;// setfill(char) — changes padding character used by setw (default: space)
   cout << setw(10) << 7<< endl;                 // DOES persist — stays until changed again
   // PERSISTENCE CHEAT SHEET:
   // setprecision, fixed, setfill  -> persist until changed
   // setw                          -> one-shot, resets after each value 
//------------------------END OF VARIABLES---------------------------------------------------------------------------------------------
}
