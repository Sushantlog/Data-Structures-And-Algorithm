#include<iostream>
using namespace std;

// int main(){
//     // int a=5;
//     // int b=5;

//     // cout<<a<<endl;

//     // cout<<&a<<endl;
//     // cout<<&b<<endl;

//     return 0;
// }

// Output = 5
// 0x61ff0c
// 0x61ff08

// ======================================================
// Pointer creation 

// int main(){
//     int a =5;

//     // pointer cteate
//     int *ptr =&a;
//     // access the value at ptr is pointing to use derefrance *ptr
//     cout<<*ptr<<endl;
//     cout<<ptr<<endl;
//     cout<<a<<endl;
//     cout<<&a<<endl;
//     cout<<&ptr<<endl; //address find 

//     cout<<"Address of a is : "<<&a<<endl;
//     cout<<"value store at ptr : "<<ptr<<endl;
//     cout<<"value ptr pointing to is : "<<*ptr<<endl;
//     cout<<"address of ptr is : "<<&ptr<<endl;
// }

// Output = 
// 5
// 0x61ff0c
// 5
// 0x61ff0c
// 0x61ff08

// Address of a is : 0x61ff0c
// value store at ptr : 0x61ff0c
// value ptr pointing to is : 5
// address of ptr is : 0x61ff08

// =================================================================

// Pointer copy to another pointer 

// int main(){
    
//     int a = 10;
    
//     int *ptr = &a;

//     cout<<" first Pointer value is : "<<*ptr<<endl;

//     int *secptr = ptr;

//     cout<<" second Pointer value is : "<<*secptr<<endl;

//     return 0;

// }

// Output =

//  first Pointer value is : 10
//  second Pointer value is : 10

// =======================================================================

// understing the concept of pointer 

// int main(){
//     int a = 10;
//     int *ptr = &a;
//     int *q = ptr;
//     int *r = q;

//     cout << a << endl;  //10
//     cout << &a << endl; //address of a
//     cout << ptr << endl; //address of a
//     cout << &ptr << endl; //address of ptr
//     cout << *ptr << endl; //10
//     cout << q << endl; //address of a
//     cout << &q << endl; //addess of q
//     cout << *q << endl; //10
//     cout << r << endl;  //address of a
//     cout << &r << endl; //address of r
//     cout << *r << endl; //10
//     cout <<(*ptr + *q + *r)<< endl; //30
//     cout <<(*ptr)*2 + (*r)*3 << endl;//50
//     cout <<(*ptr/2) - (*q)/2 << endl;//0
// }

// Output =
// 10
// 0x61ff0c
// 0x61ff0c
// 0x61ff08
// 10
// 0x61ff0c
// 0x61ff04
// 10
// 0x61ff0c
// 0x61ff00
// 10
// 30
// 50
// 0

// ===================================================================

int main(){
    int arr[4]={12,14,18,22};

    int *ptr = arr;
    cout<< ptr <<endl;
    cout<< &ptr <<endl;

    



}