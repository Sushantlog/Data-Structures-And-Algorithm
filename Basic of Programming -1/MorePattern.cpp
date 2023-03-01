#include<iostream>
using namespace std;

// full Pyramid

//      *      
//     * *     
//    * * *    
//   * * * *   
//  * * * * *  
// * * * * * * 

// int main(){
//     int n;
//     cout<<"Enter Row value: "<<endl;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int space=0; space<n-i-1; space++){
//             cout<<" ";
//         }
//         for(int j=0; j<i+1; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// Output = Enter Row value: 
// 3
//   *   
//  * *  
// * * * 

// =======================================================

// Inveted full Pyramid

// * * * * * 
//  * * * *  
//   * * *   
//    * *    
//     *     

// int main(){
//     int n;
//     cin>>n;

//     // traverse the row 
//     for(int i=0; i<n; i++){
//         for(int space=0; space<i; space++){
//             cout<<" ";
//         }
//         for(int j=0; j<n-i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// Output = 5
// * * * * * 
//  * * * *  
//   * * *   
//    * *    
//     *     

// ============================================================

// Solid Diamand

//     *     
//    * *    
//   * * *   
//  * * * *  
// * * * * * 
// * * * * * 
//  * * * *  
//   * * *   
//    * *    
//     * 

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int space=0; space<n-i-1; space++){
//             cout<<" ";
//         }
//         for(int j=0; j<i+1; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i=0; i<n; i++){
//         for(int space=0; space<i; space++){
//             cout<<" ";
//         }
//         for(int j=0; j<n-i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Output = 5 
//     *     
//    * *    
//   * * *   
//  * * * *  
// * * * * * 
// * * * * * 
//  * * * *  
//   * * *   
//    * *    
//     * 

// =========================================================

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int space=0; space<n-i-1; i++){
//             cout<<" ";
//         }
//         for(int j=0; j<2*i+1; j++){
//             if(j==0 || j==2*i){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
        
//     }
//     cout<<endl;
// }

int main(){
    int n;
    cin>>n;

    for(int row=0; row<n; row=row+1) {
		//spaces
		for(int col=0;col<n-row-1; col = col + 1) {
			cout << " ";
		}

		//stars
		for(int col=0; col<2*row+1; col = col + 1) {
			//if first character or if last character
			if(col == 0 || col == 2*row) {
				//first character or last character
				cout << "*";
			}
			else{
				cout << " ";
			}
		}
        cout<<endl;
	}
}