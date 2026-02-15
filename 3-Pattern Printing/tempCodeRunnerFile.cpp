#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int value=0;
    for(int i=1;i<=n;i++){
            if(i%2) value=0;
            else value=1;  
        for(int j=1;j<=i;j++){
            cout<<value;
            value=1-value;
        }
        cout<<endl;
    }
}