
// Multiplay two number
#include<iostream>
using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;

//     int product = a*b;
//     cout<<"Multiplation is : "<<product;
// }
// // Output=
// 5
// 6
// Multiplation is : 30

// ================================================

// Find primeter of triangle 
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;

//     int p=a+b+c;
//     cout<<"Perimeter is : "<<p<<endl;
//     return 0;
// }

// Output=
// 10
// 20
// 30
// Perimeter is : 60

// ===================================================

// find the simple interest 
// int main(){
//     int p,r,t;
//     cin>>p>>r>>t;

//     int SI=(p*r*t)/100;
//     cout<<"simple interest is : "<<SI<<endl;
//     return 0;
// }

// Output=
// 10
// 10
// 1
// simple interest is : 1

// ===========================================

// Print counting from n to 1
// int main(){
//     int n;
//     cin>>n;

//     for(int i=n;i>=1;i--){
//         cout<<i<<endl;
//     }
    
// }

// Output= 5
// 5
// 4
// 3
// 2
// 1

// ==================================================

// Find Factorial of a number 

// int main(){
//     int n;
//     cin>>n;

//     int fact=1;
//     for(int i=n;i>=1;i--){
//         fact=fact*i;       
//     }
//     cout<<"Factorial is : "<<fact<<endl;
// }

// Output = 3
// Factorial is : 6

// =======================================================

// check a number is prime or not

// int main(){
//     int n;
//     cin>>n;

//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             cout<<"not prime number ";
//         }
//         else{
//             cout<<"prime number ";
//         }
//     }
//     return 0;
// }

// ==========================================

// check given triangle is valid or not 

// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;

//     if((a+b)>c&&(b+c)>a&&(a+c)>b){
//         cout<<"Valid triangle "<<endl;
//     }
//     else{
//         cout<<"Not Valid triangle "<<endl;
//     }
//     return 0;3
// }

// Output = 
// 5
// 4
// 6
// Valid triangle 

// 1
// 3
// 0
// Not Valid triangle 

// ====================================================

// Print only even number from 1 to n
// int main(){
//     int n;
//     cin>>n;

//     int i=2;
//     while(i<=n){
//         cout<<i<<endl;
//         i=i+2;
//     }
//     return 0;
// }

// Output = 10
// 2 
// 4 
// 6 
// 8 
// 10

// ========================================================

// Print only odd number from 1 to n
// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         cout<<i<<endl;
//         i=i+2;
//     }
//     return 0;
// }

// Output = 10
// 1
// 3
// 5
// 7
// 9

// ===================================================

// print maximum of three number 

// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;

//     if(a>b){
//         if(a>c){
//             cout<<a<<endl;
//         }
//         else
//             cout<<c<<endl;
        
//     }
//     else if(b>c){
//         cout<<b<<endl;
//     }
//     else{
//         cout<<c<<endl;
//     }
//     return 0;
// }

// // Output= 
// 20
// 36
// 45

// 45

// ===============================================

// int main(){
//     int a=0;
//     int b=10;

//     a=2;
//     b=7;
//     if(a&&b){
//         cout<<"true"<<endl;
//     }
//     else{
//         cout<<"false"<<endl;
//     }
// }


int main(){
    int a=-5;
    int k=(a++,++a);
    cout<<k<<endl;
}