#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int ans=1;
//     int num=1;

//     while(num<=n){
//         ans=ans*num;
//         num++;
//     }
//     cout<<ans;
// }

// Output = 5
// 120

//=======================================================================

int main(){
    int n;
    bool is_prime = true;

    cout<<"Enter a positive number : ";
    cin>>n;

    if( n==0 || n==1){
        is_prime = false;
    }
    for(int i=2; i<=n/2; i++){
        if(n%i == 0){
            is_prime = false;
            break;
        }
    }

    if(is_prime)
    cout<<n<<" is a prime number. ";
    else
    cout<<n<<" is not a prime number. ";
    return 0;
}