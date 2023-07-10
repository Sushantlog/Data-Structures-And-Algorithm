// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     int arr[100];
//     cout<<"Enter user input : "<<endl;
//     cin>>n;
//     cout<<"enter array value : "<<endl;
//     for(int i=0; i<n; i++){

//         cin>>arr[i];
//     }

//     // printing of array 
//     cout<<"enter value is : "<<endl;
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;


// }

#include <iostream>
#include <vector> //vector delare 
using namespace std;

vector<int> subArraySum(int arr[], int n, int s)  //vector defination
{
    int sum = arr[0], start = 0, i;
    vector<int> res;        //create res vector to store the ans

    for (i = 1; i <= n; i++) {

        while (sum > s && start < i - 1) {
            sum -= arr[start];
            start++;
        }

        if (sum == s) {
            res.push_back(start+1);
            res.push_back(i);
            return res;
        }

        if (i < n)
            sum += arr[i];
    }
    res.push_back(-1);
    return res;
}

int main()
{
    int n, s;
    cin >> n >> s;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    vector<int> result = subArraySum(arr, n, s);

    for(int i=0;i<result.size();i++) {
        cout << result[i] << " ";
    }

    return 0;
}

// Output =
// 5  12

// 1
// 2
// 3
// 7
// 5

// 2 4 