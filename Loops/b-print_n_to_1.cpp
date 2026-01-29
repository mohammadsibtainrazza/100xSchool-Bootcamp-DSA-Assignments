#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int limit=n;
    // for(int i=n;i>=1;i--){
    //     cout<<i<<endl;
    // } method 1
    for(int i=0;i<n;i++){
        cout<<n+i-2*i<<" ";
    }
}