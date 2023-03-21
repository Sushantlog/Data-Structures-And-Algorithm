#include<iostream>
using namespace std;

// int binaraySearch(int arr[],int size,int traget){
//     int start=0; 
//     int end = size-1;
//     int mid = start+(end-start)/2;

//     while(start<=end){
//         int element = arr[mid];

//         if(element==traget){
//             return mid;
//         }
//         if(traget<element){
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//         mid=start+(end-start)/2;
//     }
//     return-1;
// }
// int main(){
//     int arr[]={2,5,6,8,9,10,45,85};
//     int size=8;
//     int traget =10;

//     int indexeTraget = binaraySearch(arr,size,traget);

//     if(indexeTraget==-1){
//         cout<<"Target is not found "<<endl;

//     }
//     else{
//         cout<<"Target is found at "<<indexeTraget<<endl;

//     }
//     return 0;
// }

// Output = 
// Target is found at 5

//==============================================================
//binary search using stl 

// #include<vector>
//  #include<algorithm>

// int main(){
//     vector<int> v{1,2,5,6,8,9,10};

//     if(binary_search(v.begin(),v.end(),9)){
//         cout<<"found "<<endl;
//     }
//     else{
//         cout<<"not found "<<endl;
//     }
//     return 0;
// }

// Output = found

//using array 
// int main(){
//     int arr[]={5,6,8,9,69,100,105};
//     int size = 7;

//     if(binary_search(arr,arr+size,100)){
//         cout<<"found"<<endl;
//     }
//     else{
//         cout<<"not found"<<endl;
//     }
// }

// Output = found

// ======================================================

// find first occurance of an element 

// Doute //error generate cant find

// #include<vector>
// #include<algorithm>
// int firstOccurance(vector<int>arr,int traget){
//     int start =0;
//     int end = arr.size()-1;
//     int mid = start+(end-start)/2;
//     int ans = -1;

//     while(start<=end){
//         if(arr[mid]==end){
//             ans=mid;
//             end=mid-1;
//         }
//         if(arr[mid]<traget){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid = start+(end-start)/2;
//     }
//     return ans;
// }
// int maim(){
//     vector<int> v{1,3,4,4,4,4,6,7};

//     int traget = 4;

//     int intdexOfFirstOcc = firstOccurance(v,traget); 
//     cout<<"ans is "<<intdexOfFirstOcc<<endl;

//     auto ans=lowar_bound(v.begin(),v.end(),traget);
//     cout<<"ans2 is : "<<ans-v.begin()<<endl;
//     return 0; 
// }

// =============================================================================

// 21/03/2023

// Square root of a number using binary search 

// int findsqurt(int n){
//     cout<<"function loop start "<<endl;
//     int start =0; 
//     int end = n;
//     int mid = start+(end-start)/2;
//     int ans = -1;
//     while(start <= end){
//         if(mid*mid == n){
//             return mid;
//         }
//         if(mid*mid > n){
//             end=mid-1;
//         }
//         else{
//             ans = mid;
//             start = mid+1;
//         }
//         mid = start+(end-start)/2;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"Enter the number "<<endl;
//     cin>>n;

//     int ans = findsqurt(n);
//     cout<<"Answer is : "<<ans<<endl;
//     return 0;
// }

// Output =
// Enter the number 
// 50
// function loop start 
// Answer is : 7

// Enter the number 
// 25
// function loop start 
// Answer is : 5  

// ===========================================================