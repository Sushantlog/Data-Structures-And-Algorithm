// =========== Type of Operator============
// Arithmetic operator
// Unary operator
// Relational operator
// Logical operator
// Bitwise operator
// Assignment operator
// Mise operator
#include<iostream>
using namespace std;

// NOTE= 1=True
//       2=False


// ======================= Arithmetic Operator ================
// int main()
// {
//     int a=50,b=20;
//    // cin>>a,b;
//     int addition=a+b;
//     int subtraction=a-b;
//     int mul=a*b;
//     int division=a/b;
//     int modulus=a%b;

//     cout<<"the addition "<<a <<" and "<<b<<" is :"<<addition<<endl;
//     cout<<"the subtraction "<<a <<" and "<<b<<" is :"<<subtraction<<endl;
//     cout<<"the multiplication "<<a <<" and "<<b<<" is :"<<mul<<endl;
//     cout<<"the division "<<a <<" and "<<b<<" is :"<<division<<endl;
//     cout<<"the modulus "<<a <<" and "<<b<<" is :"<<modulus<<endl;
   
// }

// //Output=
// the addition 50 and 20 is :70        
// the subtraction 50 and 20 is :30     
// the multiplication 50 and 20 is :1000
// the division 50 and 20 is :2
// the modulus 50 and 20 is :10

// ============================ Unary Operator ======================================
// Unary minus operator(-)
// int main()
// {
//     int num1=10;
//     num1=-num1;
//     cout<<"Negative Value :"<<num1;
//     int num2=-20;
//     num2=-num2;
//     cout<<"Positive Value :"<<num2;
//     return 0;
// }

// Output=
// Negative Value :-10 
// Positive Value :20

// ==============================================================
//  Unary NOT Operator(!)
// int main()
// {
//     int a=10,b=1;
//     cout<<"!(a<b) = "<<!(a<b)<<endl;
//     cout<<"(a<b) = "<<(a<b);
//     return 0;
// }

// Output=
// !(a<b) = 1
// (a<b) = 0
// ===========================================================

// Increament Operator(++)
// int main()
// {
//     int num=10;
//     cout<<"Post increment = "<<num++<<endl; //first use the value then it will increment by 1;
//     cout<<"Pre increment = "<<++num; //first increment value by 1 then it will use 
//     return 0;
// }



// Output=
// Post increment = 10
// Pre increment = 

// int main()
// {
//     int a=6;
//     cout<<a++;
// }

// Output= 6

// ===============================================================

// Decrement Operator
// int main()
// {
//     int num=10;
//     cout<<"Post Decrement (num--) = "<<num--<<endl;
//     cout<<"Pre Decrement (--num) = "<<--num;
//     return 0;

// }

// Output=
// Post Decrement (num--) = 10
// Pre Decrement (--num) = 8

// ===============================================================
// Bitwise Complement(~)

// int main()
// {
//     int num1=6;
//     int num2=-2;

//     cout<<num1<<"'s bitwise complement = "<<~num1<<endl;
//     cout<<num2<<"'s bitwise complement = "<<~num2;
//     return 0;

// }
// Output=
// 6's bitwise complement = -7       
// -2's bitwise complement = 1    

// ============================== Relational Operation ============================
// 
// 1.Equal to Operator(==)
// int main()
// {
//     int a=10;
//     int b=20;
//     int c=20;
//     cout<<(a==b)<<endl;
//     cout<<(b==c);
//     return 0;
// }

// // Output=
// 0
// 1
// =====================================================
// 2.Not Equal to operator(!=)
// int main()
// {
//     int a=10;
//     int b=20;
//     int c=20;

//     cout<<(a!=b)<<endl;
//     cout<<(b!=c);

//     return 0;
// }

// Output=
// 1
// 0

// ============================================================
// Greater than Operator(>)

// int main()
// {
//     int a=10;
//     int b=20;
//     cout<<(a>b)<<endl;
//     cout<<(b>a);
//     return 0;

// }

// Output=
// 0
// 1

// =========================================================
// Less than Operator(<)
// int main()
// {
//     int a=10;
//     int b=15;

//     cout<<(a<b);

//     return 0;
// }

// Output= 1

// =======================================================

// Greater than equal to the operator(>=)
// int main()
// {
//     int a=10;
//     int b=8;

//     cout<<(a>=b);
//     return 0;
// }

// Output= 1

// ==================================================
// Less than or equal to operator(<=)
// int main()
// {
//     int a=10;
//     int b=5;
//     cout<<(a<=b);

//     return 0;
// }

// // Output= 0

// =============================== Logical Operator ========================
//Logical And operato(&&)
// int main()
// {
//     int a=10;
//     int b=20;
//     int c=30;
    
//     cout<<(b>a && c>b)<<endl;
//     cout <<(b>a && c<b);

//     return 0;

// }

// Output=
// 1
// 0

// ====================================================================
// Logical Or Operator(||)
// int main()
// {
//     int a=10;
//     int b=20;
//     int c=30;
    
//     cout<<(b>a || c<b)<<endl;
//     cout <<(b<a || c<b);

//     return 0;

// }

// Output=
// 1
// 0

// ===============================================

// Logical Not Operator(!)
// int main()
// {
//     int a=10;
//     int b=20;
//     cout<<(!(a==b))<<endl;
//     cout<<(!(b>a));

//     return 0;
// }

// Output=
// 1
// 0

// ================================== Bitwise Operator ====================
// Bitwise AND Operator(&)
// 1 & 1= 1
// 1 & 0= 0

// int main()
// {
//     int a=6;                      //0110
//                                   //&  
//     int b=7;                      //0111
//     cout<<"a & b = "<<(a & b);    //0110 =>6
//     return 0;

// }
// Output=a & b = 6

// =====================================================
// Bitwise OR Operator(|)

// int main()
// {
//     int a=6;                      //0110
//                                   //&  
//     int b=7;                      //0111
//     cout<<"a | b = "<<(a | b);    //0111 =>7
//     return 0;

// }
// Output=a | b = 7

// ============================================================
// Bitwise NOT Operator 
// ~1=0
// ~0=1

// int main()
// {
//     int a =6;

//     cout<<"~a = "<<(~a);
//     return 0;

// }
// Output= ~a = -7

// ========================================================
// Bitwise XOR Opeator (^)
// 1^1
// 1^0
// 0^0

// int main()
// {
//     int a=6;                   //0110
//                             // ^
//     int b=7;                   //0111
//     cout<<"a ^ b = "<<(a^b);   //0001 => 1
//     return 0;
// }
// Output=a ^ b = 1

// =====================================================
// //Left Shift Operator(<<)
// int main()
// {
//     int a =8;                       //1000 
//     cout<<"a << 2 ="<<(a<<2);       //1000<<100000 =>32
//     return 0;
// }
// Output= a << 2 =32

// =========================================================


// Right Shift Operator(>>)
// int main()
// {
//     int a=8;                       //1000
//     cout<<"a >> 2 ="<<(a>>2);      //1000>>10 =>2
//     return 0;

// }
// Output= a >> 2 =2

// ==================== Assignment Operator ======================
// += :

// int main()
// {
//     int num=10;
//     num += 20;   //num=num+20;
//     cout<<num;
//     return 0;

// }
// Output= 30

// =========================================

// -= :

// int main()
// {
//     int num=20;
//     num-=10;         //num=num-10;
//     cout<<num;
//     return 0;
// }

// Output= 10

// ==============================================

// *= :

// int main()
// {
//     int num=10;
//     num*=5;         //num=num*5;
//     cout<<num;
//     return 0;

// }
// Output=50

// =================================================

// /= :

// int main()
// {
//     int num=10;
//     num/=2;      //num=num/2;
//     cout<<num;
//     return 0;
// }

// Output= 5
// =============================================

// %= :
// int main()
// {
//     int num=19;
//     num %=5;
//     cout<<num;
//     return 0;

// }
// Output= 4


// ============================ Misc Operator ================

// size of operator

// int main()
// {
//     int a;
//     cout<<"Size of int : "<<sizeof(int)<<endl;
//     cout<<"Size of char : "<<sizeof(char)<<endl;
//     cout<<"Size of float : "<<sizeof(float)<<endl;
//     cout<<"Size of double : "<<sizeof(double)<<endl;
//     cout<<"Size of a : "<<sizeof(a)<<endl;
//     return 0; 
// }

// Output=
// Size of int : 4
// Size of char : 1
// Size of float : 4
// Size of double : 8
// Size of a : 4
