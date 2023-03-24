#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={45,9,2,47};
    // vector<int> arr={10,1,7,6,14,9};
    int n=arr.size();

    for(int round=1; round<n; round++){
        // value fetch
        int val= arr[round];
        //compare
        int j=round-1; 
        for(; j>=0; j--){
            if(arr[j]>val){
                // shift
                arr[j+1]=arr[j];
            }else{
                break;
            }
        } 
        // copy
        arr[j+1]=val;
    }
    // Printing
    cout<<"Sorted Value : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
// Output = 
// Sorted Value : 2 9 45 47 
// Sorted Value : 1 6 7 9 10 14 
// ==============================================================