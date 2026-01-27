#include <iostream>
using namespace std;

int main(){
    int x;
    int y;
    cin>>x>>y;
    if(x==0 && y==0){
        cout<<"Origin";
    }
    else if(x==0 && y!=0){
        cout<<"Y axis";
    }
    else if(x!=0 && y==0){
        cout<<"X axis";
    }
    else if(x>0 && y>0){
        cout<<"1st Quadrant";
    }
    else if(x<0 && y>0){
        cout<<"2nd Quadrant";
    }
    else if(x<0 && y<0){
        cout<<"3rd Quadrant";
    }
    else if(x>0 && y<0){
        cout<<"4th Quadrant";
    }

    // this was the  1st method i came up with then with litle bit of chatpgt guide without code i made the next version which gave clarity
    
    // long long x=0;
    // long long y=0;
    // cin>>x>>y;
    // if (x==0 && y==0){
    //     cout<<"Origin";
    // }
    // else if (y==0){
    //     cout<<"X axis";
    // }
    // else if (x==0){
    //     cout<<"Y axis";
    // }
    // else if(x>0){
    //     if(y>0){
    //         cout<<"1st Quadrant";
    //     }
    //     else{
    //         cout<<"3rd Quadrant";
    //     }
    // }
    // else if(x<0){
    //     if(y>0){
    //         cout<<"2nd Quadrant";
    //     }
    //     else{
    //         cout<<"4th Quadrant";
    //     }
    // }
}
