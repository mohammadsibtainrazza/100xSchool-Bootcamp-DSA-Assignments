#include <iostream>
using namespace std;

int main(){
    long long a;
    cin>>a;
    long long digit=0;
    long long rev=0;
    if(a==0){
        cout<<0;
        return 0;
    }
    else while(a!=0){
        digit=a%10;
        rev=rev*10+digit;
        a=a/10;
    }
    cout<<rev;
}