#include<iostream>
using namespace std;

// void findMissing(int *a,int n){
//     for(int i=0; i<n; i++){
//         int index = abs(a[i]);
//         cout<<"midle loop "<<index<<endl;
//         if(a[index -1]>0){
//             a[index-1] *= -1;
//             cout<<"in inner loop "<<a[index-1]<<endl;
//         }
//     }

//     for(int i=0; i<n; i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;

//     for(int i=0; i<n; i++){
//         if(a[i]>0){
//             cout<<"Missing value : "<<i+1<<" ";
//         }
//     }
// }
// int main(){
//     int n;
//     int a[]={1,3,5,3,4};
//     n=sizeof(a)/sizeof(int);
//     cout<<sizeof(a)<<endl;
//     cout<<sizeof(int)<<endl;
//     cout<<n<<endl;

//     findMissing(a,n);
//     return 0;
// }

// Output = 
// 20
// 4
// 5
// midle loop 1    
// in inner loop -1
// midle loop 3    
// in inner loop -5
// midle loop 5    
// in inner loop -4
// midle loop 3
// midle loop 4
// in inner loop -3
// -1 3 -5 -3 -4 
// Missing value : 2 

// ==================================================================