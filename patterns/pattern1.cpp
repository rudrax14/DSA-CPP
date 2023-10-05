#include<iostream>
using namespace std;



// ***
// ***
// ***


// int main() {
//     int n;
//     cin>>n;

//     int i = 1; // for rows
//     while(i<=n){

//         int j = 1; // for coloums
//         while(j<=n){
//         cout<<"*";
//         j=j+1;
//         } 
//         cout<<endl;
//         i = i+1;

//     }
// }



// 111
// 222
// 333


// int main(){
//     int n;
//     cin>>n;

//     int i = 1; // for rows
//     while(i<=n){

//         int j = 1; // for coloums
//         while(j<=n){
//         cout<<i;
//         j=j+1;
//         } 
//         cout<<endl;
//         i = i+1;

//     }
// }

// 123
// 123
// 123


// int main(){
//     int n;
//     cin>>n;

//     int i = 1; // for rows
//     while(i<=n){

//         int j = 1; // for coloums
//         while(j<=n){
//         cout<<j;
//         j=j+1;
//         } 
//         cout<<endl;
//         i = i+1;

//     }
// }


// 4321
// 4321
// 4321
// 4321

// int main(){
//     int n;
//     cin>>n;

//     int i = 1; // for rows
//     while(i<=n){

//         int j = 1; // for coloums
//         while(j<=n){
//         cout<<n-j+1;
//         j=j+1;
//         } 
//         cout<<endl;
//         i = i+1;

//     }
// }

// 123
// 456
// 789

// int main(){
//     int n;
//     cin>>n;
//     int count = 1;
//     int i = 1; // for rows
//     while(i<=n){
        
//         int j = 1; // for coloums
//         while(j<=n){
//         cout<<count<<" ";
//         count = count +1;
//         j=j+1;
//         } 
//         cout<<endl;
//         i = i+1;

//     }
// }


// *
// **
// ***


int main() {
    int n;
    cin>>n;

    int i = 1; // for rows
    while(i<=n){

        int j = 1; // for coloums
        while(j<=i){
        cout<<"*";
        j=j+1;
        } 
        cout<<endl;
        i = i+1;

    }
}