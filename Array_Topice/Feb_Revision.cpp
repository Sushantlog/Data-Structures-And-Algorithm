// Extreme print in array
#include<iostream>
using namespace std;
int main(){
    int arr[5]={45,56,84,64,68};
    int size=5;
    // two pointer approch 
    int start=0;
    int end=size-1;

    while(start<=end){
        if(start==end){
            cout<<arr[start];
        }
        else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
        }
        start++;
        end--;
    }
    return 0;
}