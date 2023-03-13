#include<iostream>
using namespace std;


//Fancy Pattern 1

// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****

// #include "assert.h"         //hider file
// int main(){
//     int n;
//     cin>>n;
//     assert(n<=9);   //stop or only program accept value 9 less than n
//     for(int i=0; i<n; i++){
//         int start_index_num = 8-i;      //starting print
//         int num = i+1;      //print number 
//         int count_num = num;        //print count
//         for(int j=0; j<17; j++){
//             if(j==start_index_num && count_num>0){
//                 cout<<num;
//                 start_index_num += 2;
//                 count_num--;
//             }else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
// }

// Output = 5
// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****

//error will show above 9 value
// 10
// Assertion failed: n<=9, file AssigmintPattern.cpp, line 17

// =====================================================================

int main()												
{
	int n;
	cin>>n;
	int count=1;
	for(int i=1;i<=n;i++)
	{
	    for(int j=1;j<=i;j++)
		{												
			cout<<count<<" ";
			count=count+1;;
		}
		cout<<endl;
	}
	return 0;
}