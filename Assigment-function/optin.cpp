// 4. The minimum number of functions present in any C++ program is: 
// a) 0 
// b) 1 
// c) 2 
// d) Infinite 
//answer:infinite

// 5. State True and False: 
// a) A function may be called more than once from any other function 
// b) It is necessary for a function to return some value. 
//yes it is true=>a
//b=>not neccessary to reutrn some value.as per over need we can return some value from the function

// 6. Explore:  
// Can the same function name be used for different functions without any  
// conflict?
//yes we can define mulptiple functions with the same name but different numbers of parameters list
//we create example
#include<iostream>
using namespace std;
void name(){
cout<<"hello";
}
void name(string n){
cout<<n;
}
int main(){
    name();
    name("saqib");
}