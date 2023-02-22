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
 int main()
 {
    int n1;
    cin>>n1;

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
 }


