#include <iostream>
using namespace std;

//this code written by my logic but i did chatgpt for shorter version after writing  

int main(){
    int a;
    int b;
    int c;
    cin>>a>>b>>c;
    int max=0;
    int min=0;
    if(a>b && a>c){
        max=a;
        if(b<c) min=b;
        else min=c;
    }
    if(b>a && b>c){
        max=b;
        if(a<c) min=a;
        else min=c;
    }
    if(c>b && c>a){
        max=c;
        if(b<a) min=b;
        else min=a;
    }
    cout<<"Max: "<<max<<endl;
    cout<<"Min: "<<min;
}