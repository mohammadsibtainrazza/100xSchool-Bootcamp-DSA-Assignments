#include<iostream>
using namespace std;

int main(){
    long long a;
    cin>>a;
    long long sum=0;
    if(a==0) 
    {
        cout<<a;
        return 0;
    }    
    else while(a!=0){
        long long digit=a%10;
        sum=digit+sum;
        a=a/10;
    }
    cout<<sum;
}