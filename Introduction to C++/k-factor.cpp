#include <iostream>
using namespace std;

int main(){
    int n;
    int f;
    cin>>n>>f;
    if(f%n==0 || n%f==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}