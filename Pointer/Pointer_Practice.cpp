#include<iostream>
using namespace std;
// int main(){
//     float f =10.5;
//     float p = 2.5;

//     float *ptr = &f;
//     (*ptr)++;
//     *ptr = p;
//     cout<<*ptr<<", "<<f<<", "<<p<<", "<<endl;
//     return 0;
// }

// Output = 2.5, 2.5, 2.5

// =======================================================================

// int main(){
//     int a=7;
//     int b=17;

//     int *c = &b;
//     cout<<b<<endl;
//     cout<<&b<<endl;
//     cout<<*c<<endl;
//     *c = 7;
//     cout<<*c<<endl;
//     cout<<a<<" "<<b<<" "<<endl;
// }

// Output =
// 17
// 0x61ff04
// 17
// 7
// 7 7 

// ========================================================================

// int main(){
//     int *ptr = 0;
//     int a = 10;
//     *ptr = a;
//     cout<<*ptr<<endl;
    
// }

// Output = error will occur

//==========================================================
// int main(){
//     int b = 10;
//     int *a = &b;

//     cout<<a<<endl; //store address of b
//     cout<<*a<<endl; //derefernce a value of b 
//     cout<<b<<endl;  //value of b
//     cout<<&b<<endl; //address of b
// }

// Output =
// 0x61ff08
// 10
// 10
// 0x61ff08

// =====================================================================

// int main(){
//     char ch = 'a';
//     char *ptr = &ch;

//     ch++;

//     cout<<*ptr<<endl;

// }

// Output = b

// ===================================================================

// int main(){
//     int a =7;
//     int *c =&a;
//     cout<<*c<<endl;
//     c=c+1;
//     cout<<a<<" "<<*c<<endl;

// }

// Output =
// 7
// 7 6422284

// ===============================================================

// int main(){
//     int a=7;

//     int *c = &a;
//     cout<<&a<<endl;
//     cout<<*c<<endl;  
//     cout<<c<<endl;
//     c=c+3;
//     cout<<c<<endl;
//     return 0;
// }

// Output =
// 0x61ff08
// 0x61ff14
// ===============================================

// int main(){
//     double a= 10.54;
//     double *d = &a;
//     cout<<d<<endl;
//     d = d +1;

//     cout<<d<<endl;
// }

// 0x61ff00
// 0x61ff08
// =========================================================

// int main(){
//     int a[5];
//     int *c;

//     cout<<sizeof(a)<<" "<<sizeof(c)<<endl;
// }

// Output =
// 20 4
 
// =======================================================

// int main(){
//     int a[]={1,2,3,4};
//     cout<<*(a)<<" "<<*(a+1)<<endl;

//     int b[3]={1,2,3};
//     cout<<*(b+2)<<endl;
// }
// Output 
// 1 2
// 3
// ====================================

// int main(){
//     int arr[]={4,5,6,7};
//     int *p = (arr +1);
//     cout<<*arr+9<<endl;
// }

// Output = 13
// =============================================================