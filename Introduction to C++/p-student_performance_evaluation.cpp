#include <iostream>
using namespace std;

int main(){
    int marks=0;
    cin>>marks;
    if(marks<=100){
        
    if(marks<=60){
        cout<<"Below Par";
    }
    else if(marks<=70){
        cout<<"Meets Expectations";
    }
    else if(marks<=80){
        cout<<"Fair";
    }
    else if(marks<=90){
        cout<<"Good";
    }
    else if(marks>90){
        cout<<"Excellent";
    }
    }
}   