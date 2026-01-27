#include <iostream>
using namespace std;

//this is shorter version 

int main(){
    int a;
    int b;
    int c;
    cin>>a>>b>>c;
    int max=a;
    int min=a;
    
    if(b>max) max=b;
    if(c>max) max=c;

    if(b<min) min=b;
    if(c<min) min=c;

    cout<<"Min"<<" = "<<min<<endl;
    cout<<"Max"<<" = "<<max;
}