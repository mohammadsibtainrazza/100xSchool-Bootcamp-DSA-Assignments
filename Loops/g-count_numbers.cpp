#include <iostream>
using namespace std;


// int countNumbers(int num){
//     int pos=0;
//     int neg=0;
//     int even=0;
//     int odd=0;
//     if(num>0){
//         pos++;
//     }
//     if(num<0){
//         neg++;
//     }
//     if(num%2==0){
//         even++;
//     }
//     if(num%2!=0){
//         odd++;
//     }
//     cout<<pos<<endl;
//     cout<<neg<<endl;
//     cout<<even<<endl;
//     cout<<odd<<endl;
// }

// took lil bit help of chatgpt not code but concept 

int main(){
    int n;
    cin>>n;
    int pos=0;
    int neg=0;
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++){
        int nums;
        cin>>nums;
        if (nums>0){
            pos++;
        }
        if(nums<0){
            neg++;
        }
        if(nums%2==0){
            even++;
        }
        if(nums%2!=0){
            odd++;
        }
    }
    cout<<pos<<endl;
    cout<<neg<<endl;
    cout<<even<<endl;
    cout<<odd<<endl;
}