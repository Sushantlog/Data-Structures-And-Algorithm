#include<iostream>
using namespace std;


//solid Rectangle
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// int main()
// {
//     int n;
//     cin>>n;

//     for(int row=0;row<n;row=row+1)
//     {
//         for(int col=0; col<n; col=col+1)
//         {
//             cout<<"* ";
        
//         }
//         cout<<endl;
//     }
// }


//square rectangle
// * * * * 
// * * * * 
// * * * * 
// * * * * 
// int main()
// {

//     for(int i=0;i<4;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
// }

                                            //doute
//hollow Rectangle 
// * * * * 
// *     *
// *     *
// * * * * 
//  int main()
//  {
//     int n;
//     cin>>n;
//     for(int row =0; row<n; row=row+1)
//     {
//         if(row==0||row==n-1)
//         {
//             for(int i=0;i<n;i++)
//             {
//                 cout<<"* ";              
//             }

//         }
//         else
//         {
//             cout<<"*";
//             for(int space=0;space<n;space++)
//             {
//                 cout<<" ";
//             }
//             cout<<" *";
//         }
//         cout<<endl;
//     }

//  }


// //Half Pyramid
// *         
// * *       
// * * *     
// * * * *   
// * * * * * 

//  int main()
//  {
//     int n1;
//     cin>>n1;

//     for(int i=0;i<n1;i++)
//     {
//         for(int j=0;j<i+1;j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//  }

// Output = 5  
// *         
// * *       
// * * *     
// * * * *   
// * * * * * 

// =============================== 10/03/2023 ===============================
//inverted half pyramid

// * * * * * 
// * * * *   
// * * *     
// * *       
// *    

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// Output = 5
// * * * * * 
// * * * *   
// * * *     
// * *       
// *   

//==============================================================

// 1    
// 22   
// 333  
// 4444 
// 55555

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<i+1;
//         }
//         cout<<endl;
//     }
// }

// Output = 5
// 1    
// 22   
// 333  
// 4444 
// 55555

// ====================================================================

// 12345
// 1234
// 123
// 12
// 1 

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i; j++){
//             cout<<j+1;
//         }
//         cout<<endl;
//     }
// }

// Output = 5
// 12345
// 1234
// 123
// 12
// 1

// ================================================================


