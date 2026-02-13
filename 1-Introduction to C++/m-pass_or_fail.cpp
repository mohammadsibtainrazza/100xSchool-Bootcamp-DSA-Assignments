#include <iostream>
using namespace std;

int main(){
    int marks;
    cin>>marks;
    if(marks>0 && marks<100){
        if(marks>=35){
        cout<<"Pass";
    }
    else{
        cout<<"Fail";
    }
    }
}