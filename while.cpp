#include<iostream>
using namespace std;
// int main(){
//     int n ;
//     cin >> n ;
//     // cout<<n;
//     int i = 0 ;
//     int sum = 0 ;
//     while(i<n){  
//         sum = sum + i;
//         i = i+2;
//         cout<<sum<<endl;
//     }
// cout<<" main "<<sum<<endl;
// }

// even number  

// int main(){
//     int n ;
//     cin >> n ;
//     // cout<<n;
//     int i = 0 ;
//     int sum = 0 ;
//     while(i<n){
//         i = i+2;
//         cout<<i<<endl;
//     }

// }

// prime no 

int main (){
    int n ;
    cin>>n;
    int i = 2;
    while(i<n){
        if(n%i == 0){
            cout<<"Not prime for "<<i<<endl;  
        }else{
            cout<<"Prime for "<<i<<endl;
        }
            i = i+1;
    }

}
