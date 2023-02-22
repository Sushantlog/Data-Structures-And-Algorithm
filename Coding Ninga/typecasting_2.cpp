#include<iostream>
using namespace std;

// //implicit type conversion
// int main()
// {
//     int num=200;
//     char latter='c';
//     float dec =0.7;
//     int res1=num+dec;
//     cout<<res1<<" ";
//     float res2=res1+dec;
//     cout<<res2;

// }

// // output=299 299.7


// // explicit type conversion
// int main()
// {
//     double dbl=5.6;
//     int res=(int)dbl+10;//dbl is explicit conversion
//     //dbl become 5
//     cout<<"Result = "<<res;

// }

// // output= Result = 15
// ==========================================


int main()
{
    int dbl=5;
    float res=(float)dbl+10.12;//dbl is explicit conversion
    //dbl become 5 is convert into floating value
    cout<<"Result = "<<res;

}

//output= Result = 15.12