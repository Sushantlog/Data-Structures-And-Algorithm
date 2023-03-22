#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={5,4,3,2,1};
    int i;
    int n=arr.size();
   //outer loop start 0 => n-1 
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    cout<<"Sorted Order is : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}      