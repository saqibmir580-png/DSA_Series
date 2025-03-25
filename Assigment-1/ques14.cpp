//wap that will tell the no. of dogs and chiken are there when the user will provides the value of total heads and legs
//head=>4 and legs=>12
//dogs 2 and 2 chicken
//4dog+4chicken=4head
//4dogs+2chiken=legs
//2chicken=4head-legs
//chicken=2head-1/2legs
//d+c=head
//d=head-chicken
//subtractioin
#include<iostream>
using namespace std;
int main(){
    int heads,legs;
    cout<<"Enter the heads:";
    cin>>heads;
    cout<<"Enter the legs:";
    cin>>legs;
    float chicken=(2*heads-1/2*legs);
    float dogs=4*heads-chicken;
    cout<<"Total chicken is="<<chicken;
    cout<<"Total dogs is="<<dogs;


}
