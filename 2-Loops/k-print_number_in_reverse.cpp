#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long a;
    cin>>a;
    long long digit =0;
    if(a==0) 
    {cout<<a;
    return 0;
    }
    while (a!=0){
        digit=a%10;
        cout<<digit;
        a=a/10;
    }
}