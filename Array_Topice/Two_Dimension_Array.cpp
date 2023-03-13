#include<iostream>
using namespace std;

// int main(){
//     int arr[3][3];
//     int row=3;
//     int col=3;

//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Printing row wise "<<endl;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     cout<<"Printing column wise "<<endl;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout<<arr[j][i]<<" ";
//         }
//         cout<<endl;
//     }
// }

// Output = 
// 10 20 30
// 40 50 60
// 70 80 90
// Printing row wise    
// 10 20 30 
// 40 50 60 
// 70 80 90 
// Printing column wise 
// 10 40 70 
// 20 50 80 
// 30 60 90 

// =========================================================================

//Row wise sum
// void printRowSum(int arr[][3],int row,int col){

//     cout<<"Row Wise Sum :"<<endl;
//     for(int i=0; i<row; i++){
//         int sum=0;
//         for(int j=0; j<col; j++){
//             sum += arr[i][j];
//         }
//         cout<<sum<<" "<<endl;
//     }
// }
// int main(){
//     int arr[3][3];
//     int row=3;
//     int col=3;

//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cin>>arr[i][j];
//         }
//     }
    
//     cout<<"Printing row wise "<<endl;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     printRowSum(arr,row,col);
// }

// Output =
// 10 20 30 
// 40 50 60 
// 70 80 90
// Printing row wise 
// 10 20 30 
// 40 50 60 
// 70 80 90 
// Row Wise Sum :    
// 60 
// 150 
// 240 

// ============================================================

//Column Wise Sum

// void printcolumnSum(int arr[][3],int row,int col){

//     cout<<"Column Wise Sum :"<<endl;
//     for(int i=0; i<row; i++){
//         int sum=0;
//         for(int j=0; j<col; j++){
//             sum += arr[j][i];
//         }
//         cout<<sum<<" ";
//     }
// }
// int main(){
//     int arr[3][3];
//     int row=3;
//     int col=3;

//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cin>>arr[i][j];
//         }
//     }
    
//     cout<<"Printing row wise "<<endl;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     printcolumnSum(arr,row,col);
// }

// Output =
// 10 20 30 
// 40 50 60
// 70 80 90
// Printing row wise 
// 10 20 30 
// 40 50 60 
// 70 80 90 
// Column Wise Sum : 
// 120 150 180   

// ===========================================================================
//liner search in 2d array 
// bool Findkey(int arr[][3],int row,int col,int key){
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             if(arr[i][j]==key){
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int main(){
//     int arr[3][3];
//     int row=3;
//     int col=3;

//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Printing the 2D array : "<<endl;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     int key;
//     cout<<"Enter key you want to search :"<<endl;
//     cin>>key;

//     cout<<Findkey(arr,row,col,key);
// }

// Output = 
// 10 20 30
// 40 50 60 
// 70 80 90
// Printing the 2D array : 
// 10 20 30 
// 40 50 60 
// 70 80 90 
// Enter key you want to search :   
// 400
// 0
//==============================================

// bool Findkey(int arr[][3],int row,int col,int key){
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             if(arr[i][j]==key){
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int main(){
//     int arr[3][3];
//     int row=3;
//     int col=3;

//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Printing the 2D array : "<<endl;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     int key;
//     cout<<"Enter key you want to search :"<<endl;
//     cin>>key;

//     int find=Findkey(arr,row,col,key);
//     if(find==1){
//         cout<<"Number is Present "<<key;
//     }
//     else{
//         cout<<"Number is not Present "<<key;
//     }
//     return 0;
    
// }

// Output = 
// 10 20 30 
// 40 50 60
// 70 80 90
// Printing the 2D array :       
// 10 20 30 
// 40 50 60 
// 70 80 90 
// Enter key you want to search :
// 50
// Number is Present 50

// ==========================================================================

// prinjal ashok patil

// int main(){
//     string pa="Pranjal Ashok Patil ";
//     cout<<pa;
//     return 0;
// }

// ==============================================================

// Find Maximum and Minimum

// #include<limits.h>
// int findMin(int arr[][3],int row,int col){
//     int mini=INT_MAX;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             if(arr[i][j]<mini){
//                 mini=arr[i][j];
//             }
//         }
//     }
//     return mini;
// }

// int findMax(int arr[][3],int row,int col){
//     int maxi=INT_MIN;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             if(arr[i][j]>maxi){
//                 maxi=arr[i][j];
//             }
//         }
//     }
//     return maxi;
// }

// int main(){
//     int arr[3][3];
//     int row=3;
//     int col=3;

//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Printing the 2D array : "<<endl;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"Maximum Number is : "<<findMax(arr,row,col)<<endl;
//     cout<<"Minimum Number is : "<<findMin(arr,row,col);

//     return 0;
// }

// Output = 
// 10 20 30
// 40 50 60 
// 70 80 90

// Printing the 2D array : 
// 10 20 30 
// 40 50 60 
// 70 80 90 

// Maximum Number is : 90  
// Minimum Number is : 10  

// ==================================================================================




