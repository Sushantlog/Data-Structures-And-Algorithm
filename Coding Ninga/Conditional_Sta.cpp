
// ======================= Conditional Statement =====================
// if Statement
// if-else Statement
// nested if Statement
// if else if Statement
// switch Statement
// jump Statement

// =================================================
// 1.if Statement : //
#include<iostream>
using namespace std;

// int main()
// {
//     int i=20;
//     if(i>10)
//     {
//         cout<<"Condition is true ";

//     }
//     return 0;
// }

// Output= Condition is true 

// ==========================================

// 2.if-else Statement //

// int main()
// {
//     int num;
//     cin>>num;
//     if(num % 2==0)
//     {
//         cout<<"The Number Entered is even : "<<num;
//     }
//     else{
//         cout<<"The Number Entered is odd : "<<num;

//     }
//     return 0;
// }
// Output=
// 10
// The Number Entered is even : 10

// 5
// The Number Entered is odd : 5


// Check whether a given number is divisible by 10 or not

// int main()
// {
//     int number;
//     cin>>number;

//     if(number % 10 == 0){
//         cout<<"The Number is divisible by 10 ";
//     } else{
//         cout<<"The Number is not divisible by 10";
//     }
//     return 0;
// }

// Output=
// 30
// The Number is divisible by 10

// 15
// The Number is not divisible by 1
// ========================================================

// 3.nested if Statement //

// int main()
// {
//     int age=15;

//     if(age >= 14)
//     {
//         if(age >= 18){
//             cout<<"You are an adult";
//         }
//         else{
//             cout<<"You are teenager";
//         }
//     }
//     else{
//         if(age>0){
//             cout<<"You are a child";
//         }
//         else
//         {
//             cout<<"Invalid age";
//         }
//     }
//     return 0;
// }

//Output = You are teenager

// ============================================================

// 4.if else if Statement

// int main()
// {
//     int num;
//     cin>>num;
//     if(num>0){
//         cout<<"You entered a positive integer  "<<endl;
//     }
//     else if (num<0){
//         cout<<"You entered a negative integer "<<endl;
//     }
//     else{
//         cout<<"You entered 0 "<<endl;
//     }
//     return 0;
// }

// Output=
// 0
// You entered 0

// -1
// You entered a negative integer 

// 5
// You entered a positive integer 

// ===============================================================
// switch Statement
// int main()
// {
//     float num1,num2,result;
//     char oper;

//     cout<<"Enter First number : "<<endl;
//     cin>>num1;
//     cout<<"Enter Second number : "<<endl;
//     cin>>num2;

//     cout<<"Choose operation to perform (+,-,*,/) : "<<endl;
//     cin>>oper;

//     switch(oper){
//         case '+' :
//                 result=num1+num2;
//                 cout<<"Result : "<<num1<<" "<<oper<<" "<<num2<<" = "<<result;
//                 break;
//         case '-' :
//                 result=num1+num2;
//                 cout<<"Result : "<<num1<<" "<<oper<<" "<<num2<<" = "<<result;
//                 break;
//         case '*' :
//                 result=num1+num2;
//                 cout<<"Result : "<<num1<<" "<<oper<<" "<<num2<<" = "<<result;
//                 break;
//         case '/' :
//                 result=num1+num2;
//                 cout<<"Result : "<<num1<<" "<<oper<<" "<<num2<<" = "<<result;
//                 break; 
//         default :
//                 cout<<"Invalid Oprerator ";                
//     }
//     return 0;
// }

// Output=
// Enter First number :
// 2.5
// Enter Second number :
// 5.7
// Choose operation to perform (+,-,*,/) :
// +
// Result : 2.5 + 5.7 = 8.2


// ======================================================================
