#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={10,1,7,6,14,9};

    int n=v.size();
    for(int round=1; round<n; round++){
        for(int j=0; j<n-round; j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
    // print 
    cout<<"Sorted value is : ";
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}

// Output = Sorted value is : 1 6 7 9 10 14 
// ==================================================
// Start with 0

// int main(){
//     vector<int> v={10,1,7,6,14,9};

//     int n=v.size();
//     for(int round=0; round<n-1; round++){
//         for(int j=0; j<n-round-1; j++){
//             if(v[j]>v[j+1]){
//                 swap(v[j],v[j+1]);
//             }
//         }
//     }
//     // print 
//     cout<<"Sorted value is : ";
//     for(int i=0; i<n; i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// Output = Sorted value is : 1 6 7 9 10 14 
