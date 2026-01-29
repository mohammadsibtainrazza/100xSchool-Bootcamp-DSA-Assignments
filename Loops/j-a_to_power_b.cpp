#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int base;
    int exp;
    cin>>base>>exp;;
    int res=pow(base,exp);
    if(base%5==0){
        res++;
    }
    // cout<<pow();
    cout<<res;
}