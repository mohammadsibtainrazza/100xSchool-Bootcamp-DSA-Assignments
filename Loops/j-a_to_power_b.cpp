#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long base;
    long long exp;
    cin>>base>>exp;
    long long res=1;
    for(int i=1;i<=exp;i++){
        res=res*base;
    }
    cout<<res;
}