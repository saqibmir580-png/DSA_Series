//if marks of A and B and C are input through the keyboard w a p to determine the student scoring least
#include<iostream>
using namespace std;
int main(){
    int std1,std2,std3;
    cout<<"Enter the marks of student 1: ";
    cin>>std1;
    cout<<"Enter the marks of student 2: ";
    cin>>std2;
    cout<<"Enter the marks of student 3: ";
    cin>>std3;
    if(std1<std2 && std1 < std3){
        cout<<"student1 has least marks:";
    }else if(std2<std1 && std2 <std3){
        cout<<"student2 has least marks :";
    }else{
        cout<<"student3 has least marks: ";
    }
}