// ans.push_back(element);
//             }
//         }
        
//     }
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }

// Output = 3 3 4 

// ==================================================================

// pair sum (sum of two pair is equal to given sum find how many pair will present)
// int main(){
//     vector<int> arr{10,20,40,60,70};
// 	int sum = 80;

//     for(int i=0;i<arr.size();i++){
//         int element=arr[i];

//         for(int j=i+1;j<arr.size();j++){
//             if(element + arr[j] == sum){
//                 cout<< "Pair Found "<< element <<","<< arr[j] << endl;
//             }
//         }
//     }
// }

// Output = 
// Pair Found 10,70
// Pair Found 20,60

// ===========================================================================
// Triplet Sum

// int main(){
// 	vector<int> arr{10,20,30,40};
// 	int sum = 80;

//     for(int i=0;i<arr.size();i++){
//         int element=arr[i];

//         for(int j=i+1;j<arr.size();j++){
//             int elementSec=arr[j];
            
//             for(int k=i+2;k<arr.size();k++){        //[for(int k=j+2;k<arr.size();k++) => Triplet Pair Sum Found : 10,30,40]
//                 if(element+elementSec+arr[k]==sum)
//                 {
//                     cout<<"Triplet Pair Sum Found : "<<element<<","<<elementSec<<","<<arr[k]<<endl;
//                 }
//             }
//         }
//     }
//     return 0;
// }

// Output = 
// Triplet Pair Sum Found : 10,30,40
// Triplet Pair Sum Found : 10,40,30 

// =================================================================================

// four sum
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

// int main(){
//     int n;
//     cin>>n;

//     vector<int>arr(n,-101);

//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
    
// }

// ==========================================================================

// Unique element of array
// int findUnique(vector<int>arr){
//     int ans=0;
//     for(int i=0;i<arr.size();i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cout<<"enter size of array : ";
//     cin>>n;

//     vector<int>arr(n);          //must be in ( ) this bracke not { } this 
//     cout<<"enter the array element : "<<endl;
//     for(int i=0;i<arr.size();i++)
//     {
//         cin>>arr[i];
//     }
//     int uniqueElement = findUnique(arr);
//     cout<<"Unique number is : "<<uniqueElement<<endl;
//     return 0;
// }

// Output = 
// enter size of array : 5
// enter the array element : 
// 1
// 3
// 3
// 4
// 1
// Unique number is : 4

// Output = 
// enter size of array : 5
// enter the array element : 
// 1 1 2 3 3
// Unique number is : 2

// ======================================================

// Union of two array 

// int main(){
//     int arr[]={1,3,5,7,9};
//     int sizea=5;
//     int brr[]={2,4,6,8};
//     int sizeb=4;

//     // create ans vector to store union answer
//     vector<int>ans;
//     //add value of arr vector to ans vector
//     for(int i=0;i<sizea;i++){  //not vector size like (arr.size()) teke simple sizea
//         ans.push_back(arr[i]);
//     }

//     //add value of brr vector to ans vector
//     for(int j=0;j<sizeb;j++){
//         ans.push_back(brr[j]);
//     }

//     // printing value
//     cout<<"Union of two array : ";
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";

//     }

//     return 0;
// }

// Output = Union of two array : 1 3 5 7 9 2 4 6 8   
// ===================================================================

// Intersection of two array

// int main(){
    
// 	vector<int> arr{1,2,3,3,4,6,8};
// 	vector<int> brr{3,3,4,10}; 

//     vector<int>ans;

//     for(int i=0;i<arr.size();i++){
//         int element=arr[i];
//         for(int j=0;j<brr.size();j++){
//             if(element==brr[j]){
//                 brr[j]=-1;
//                 ans.push_back(element);
//             }
//         }
        
//     }
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }

// Output = 3 3 4 

// ==================================================================

// pair sum (sum of two pair is equal to given sum find how many pair will present)
// int main(){
//     vector<int> arr{10,20,40,60,70};
// 	int sum = 80;

//     for(int i=0;i<arr.size();i++){
//         int element=arr[i];

//         for(int j=i+1;j<arr.size();j++){
//             if(element + arr[j] == sum){
//                 cout<< "Pair Found "<< element <<","<< arr[j] << endl;
//             }
//         }
//     }
// }

// Output = 
// Pair Found 10,70
// Pair Found 20,60

// ===========================================================================
// Triplet Sum

// int main(){
// 	vector<int> arr{10,20,30,40};
// 	int sum = 80;

//     for(int i=0;i<arr.size();i++){
//         int element=arr[i];

//         for(int j=i+1;j<arr.size();j++){
//             int elementSec=arr[j];
            
//             for(int k=i+2;k<arr.size();k++){        //[for(int k=j+2;k<arr.size();k++) => Triplet Pair Sum Found : 10,30,40]
//                 if(element+elementSec+arr[k]==sum)
//                 {
//                     cout<<"Triplet Pair Sum Found : "<<element<<","<<elementSec<<","<<arr[k]<<endl;
//                 }
//             }
//         }
//     }
//     return 0;
// }

// Output = 
// Triplet Pair Sum Found : 10,30,40
// Triplet Pair Sum Found : 10,40,30 

// =================================================================================
