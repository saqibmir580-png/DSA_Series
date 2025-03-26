//if cost and price and selling price is input through keyboard.
//wap determine whethers seller had made profit or incured loss.
//Also determine whether how much profit has been made and loss
//he incured;
#include<iostream>
using namespace std;
int main(){
    int sellingPrice,costPrice;
    cout<<"Enter the selling:";
    cin>>sellingPrice;
    cout<<"Enter the cost Price:";
    cin>>costPrice;
    if(costPrice>sellingPrice){
        cout<<"loss"<<costPrice-sellingPrice;
    }else{
        cout<<"Profit"<<sellingPrice-costPrice;
    }
}