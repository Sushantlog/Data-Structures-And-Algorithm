#include<iostream>
using namespace std;
                                                                        //20/2/2023
// int main(){
//     int arr[]={1,3,5,7,9}; //initialization array
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";          //printing
//     }
//     return 0;
// }

//  Output= 1 3 5 7 9 

// ==============================================================

// Taking input form user
// int main(){
//     int arr[10];    //statice array
//     cout<<"Enter the input value in an array :"<<endl;  //input take
//     for(int i=0;i<10;i++){
//         cin>>arr[i];
//     }

//     cout<<"array value is : "<<endl;            //printing the value 
//     for(int i=0;i<10;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// Output =
// Enter the input value in an array :
// 10 20 30 40 50 60 70 80 90 100 
// array value is : 
// 10 20 30 40 50 60 70 80 90 100 

// ===========================================================================


// take 5 element input in an array and print their 

// int main(){
//     int arr[100];
//     int n;

//     cout<<"How many array element you want to insert : "<<endl;
//     cin>>n;

//     cout<<"Enter the array element : "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     cout<<"Array value present : "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// Output = 
// How many array element you want to insert : 
// 5
// Enter the array element : 
// 25
// 36
// 41
// 52
// 63
// Array value present : 
// 25 36 41 52 63     


// ===================================================================================

// take 5 element input in an array and print their double

// int main(){
//     int arr[50];
//     int n;
    
//     cout<<"how many number you want to insert : "<<endl;
//     cin>>n;

//     cout<<"enter element of array : "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"value present in an array : "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<2*arr[i]<<" ";
//     }
//     return 0;
// }

// Output = 
// how many number you want to insert : 
// 5
// enter element of array : 
// 25
// 5
// 1
// 4
// 8
// value present in an array : 
// 50 10 2 8 16 

// ==============================================================================

// input= arr[]={1,3,5,7,9};
// output= arr[]={1,1,1,1,1}

// int main(){
//     int arr[5]={1,3,5,7,9};

//     for(int i=0;i<5;i++){       //array access/travers
//         arr[i]=1;
//     }           

//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// Output = 1 1 1 1 1 

// ===========================================================================

//call by value and call referance chack 
// NOTE= in array only it will call by referance mean change will done in actual value

// void printArray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int inc(int arr[],int size){
//     arr[0]=arr[0]+10;
//     printArray(arr,size);
// }

// int main(){
//     int arr[]={5,6};
//     int size=2;
//     inc(arr,size);
//     printArray(arr,size);
// }
 
// Output = 
// 15 6 
// 15 6 

// ===========================================================================================

// Linear search
// 1
// bool find(int arr[],int size,int key){
//     // finding the key present or not
//     for(int i=0;i<size;i++){
//         if(arr[i] == key)
//            return true;
//     }
 
//     return false;
// }

// int main(){
//     int arr[5]={1,3,5,6,9};
//     int size = 5;
//     int key;
//     cout<<"enter key you want search : ";
//     cin>>key;

//     // function calling in calling must be pass array,array size,key to function
//     if(find(arr,size,key)){
//         cout<<"key found "<<endl;
//     }
//     else {
//         cout<<"key is not found "<<endl;
//     }

// }
       

// 2
// bool find(int arr[],int size,int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key)
//         return true;
//     }
//     return false;
// }
// int main(){
//     int arr[5]={1,6,9,10,15};
//     int size=5;

//     cout<<"enter key :"<<endl;
//     int key;
//     cin>>key;

//     if(find(arr,size,key)){
//         cout<<"found"<<endl;
//     }
//     else {
//         cout<<"key is not found "<<endl;
//     }
//     return 0;
// }


// 3
// bool find(int arr[], int size, int key) {

// 	//linear search

// 	for(int i=0; i<size; i++) {
// 		if(arr[i] == key) 
// 			return true;
// 	}

// 	//not present
// 	return false;
// }

// int main(){

//     int arr[5] = {1,3,5,7,8};
// 	int size = 5;

// 	cout << "Enter the key to find " << endl;
// 	int key;
// 	cin  >> key;

// 	if(find(arr,size, key)) {
// 		cout << "Found " << endl;
// 	}
// 	else {
// 		cout << "not Found " << endl;
// 	}

// }

// =================================================================================================

// count 0 and 1 in an array
// int main(){
   
//     int arr[]={0,1,1,1,0,0,0,0,1,0,1,0,1,0,1};
//     int size =15;

//     int numOne=0;
//     int numZero=0;

//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//             numZero++;
//         }
//         if(arr[i]==1){
//             numOne++;
//         }
//     }
//     cout<<"number of one in an array :"<<numOne<<endl;
//     cout<<"number of Zero in an array :"<<numZero<<endl;

//     return 0;

// }

// ===============================================================================


