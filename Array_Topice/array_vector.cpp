//                                                    21/02/2023
#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     vector<int>arr;  //declare vector

//     cout<<arr.size()<<endl;         //size and capacity initially 0
//     cout<<arr.capacity()<<endl;

//     return 0;
// }

// Output =
// 0
// 0
// ==========================================================================

// int main(){
//     vector<int>arr(10);  //initialization vector it create 10 size memory 

//     cout<<arr.size()<<endl;        
//     cout<<arr.capacity()<<endl;

//     for(int i=0;i<arr.size();i++){
//         cout<<arr.size()<<" ";
//     }

//     return 0;
// }

// Output = 
// 10
// 10
// 10 10 10 10 10 10 10 10 10 10 
// =========================================================================

// int main(){
//     vector<int>arr(10,-1);  //initialization vector it create 10 size memory and
//                             //it create dyanmic memory location of -1
//     cout<<arr.size()<<endl;        
//     cout<<arr.capacity()<<endl;

//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// Output = 
// 10
// 10
// -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 

// ==============================================================================

// int main(){
//     vector<int>arr{10,20,30,50};  
//     //iterate the value or traversing vector
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// Output = 10 20 30 50 
// ========================================================================

// Take user input from the user in vector

int main(){
    int n;
    cin>>n;

    vector<int>arr(n,-101);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    
}