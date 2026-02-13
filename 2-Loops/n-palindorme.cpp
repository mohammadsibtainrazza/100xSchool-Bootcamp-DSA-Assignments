#include<iostream>
using namespace std;

int main(){
    long long a;
    cin>>a;
    long long b=a;
    long long digit=0;
    long long rev=0;
    if(b==0){
        cout<<"YES";
        return 0;
    }
    else while(b!=0){
        digit=b%10;
        rev=rev*10+digit;
        b=b/10;
    }
    if(rev==a){
        cout<<"YES";
    }
    else cout<<"NO";
}