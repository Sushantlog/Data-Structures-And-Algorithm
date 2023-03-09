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
//         for(int space=0; space<n-i-1; i=i+1){
//             cout<<" ";
//         }
//         for(int j=0; j<2*i+1; j=j+1){
//             if(j==0 || j==2*i){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
// 		cout<<endl;
//     }
    
// }

// int main(){
//     int n;
//     cin>>n;

//     for(int row=0; row<n; row=row+1) {
// 		//spaces
// 		for(int col=0;col<n-row-1; col = col + 1) {
// 			cout << " ";
// 		}

// 		//stars
// 		for(int col=0; col<2*row+1; col = col + 1) {
// 			//if first character or if last character
// 			if(col == 0 || col == 2*row) {
// 				//first character or last character
// 				cout << "*";
// 			}
// 			else{
// 				cout << " ";
// 			}
// 		}
//         cout<<endl;
// 	}
// }


// ============================================

// Hollow Diamand

//     *      
//    *  *    
//   *    *   
//  *      *  
// *        * 
// *        * 
//  *      *  
//   *    *   
//    *  *    
//     *   

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int spaces=0; spaces<n-i-1; spaces++){
//             cout<<" ";
//         }
//         for(int j=0; j<2*i+1; j++){
//             if(j==0 || j==2*i){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     for(int i=0; i<n; i++){
//         for(int spaces=0; spaces<i; spaces++){
//             cout<<" ";
//         }
//         for(int j=0; j<2*n-2*i-1; j++){
//             if(j==0 || j==2*n-2*i-2){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// Output = 4
//    *     
//   *  *   
//  *    *  
// *      * 
// *      * 
//  *    *  
//   *  *   
//    *   

// =======================================================

// Flipped Solid Diamond

// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){                     //row => i
//         for(int j=0; j<n-i; j++){               //col => j
//             cout<<"*";
//         }
//         for(int j=0; j<2*i+1; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<n-i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<"*";
//         }
//         for(int j=0; j<2*n-2*i-1; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<i+1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// Output = 5
// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****

// ===================================================================

// Fancy Pattern 2

// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5
// 5*5*5*5*5
// 4*4*4*4
// 3*3*3
// 2*2
// 1

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<i+1;
//             if(i!=j){
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i; j++){
//             cout<<n-i;
//             if(j != n-i-1){
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
// }

// Output =

// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5
// 5*5*5*5*5
// 4*4*4*4
// 3*3*3
// 2*2
// 1

// ====================================================================

// int main(){
//     int n; 
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<2*i+1; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// Output = 7
// * 
// * * * 
// * * * * * 
// * * * * * * *         
// * * * * * * * * *     
// * * * * * * * * * * * 
// * * * * * * * * * * * * * 

// ==================================================================

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<j+1<<" ";
//         }
//         cout<<endl;
//     }
// }

// Output = 5
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 

// ===================================================================

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<2*i+1; j++){
//             cout<<j+1<<" ";
//         }
//         cout<<endl;
//     }
// }

// Output = 5
// 1 
// 1 2 3
// 1 2 3 4 5
// 1 2 3 4 5 6 7
// 1 2 3 4 5 6 7 8 9

// ================================================================

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<i+1<<" ";
//         }
//         cout<<endl;
//     }
// }

// Output = 5
// 1         
// 2 2       
// 3 3 3     
// 4 4 4 4   
// 5 5 5 5 5 

// =============================================================

// 1 
// 1 2 1 
// 1 2 3 2 1         
// 1 2 3 4 3 2 1     
// 1 2 3 4 5 4 3 2 1 

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<j+1<<" ";
//         }
//         //Printing Reversr of it
//         for(int j=i; j>=1; j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// Output = 5
// 1 
// 1 2 1 
// 1 2 3 2 1         
// 1 2 3 4 3 2 1     
// 1 2 3 4 5 4 3 2 1 

// =================================================================

// Alphabet Palindrome Pyramid

// A 
// A B A 
// A B C B A         
// A B C D C B A     
// A B C D E D C B A


// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             int ans=j+1;
//             char ch= ans +'A'-1;
//             cout<<ch<<" ";
//         }
//         for(int j=i; j>=1; j--){
//             int ans = j;
//             char ch = ans +'A'-1;
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
// }

// Output = 5
// A 
// A B A 
// A B C B A         
// A B C D C B A     
// A B C D E D C B A 

// ==============================================================================

// 1       
// 1 2     
// 1   3   
// 1     4 
// 1 2 3 4 5

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             if(j==0 || i==j || i==n-1){
//                 cout<<j+1<<" ";  //only one space
//             }else{
//                 cout<<"  ";  //double space 
//             }
//         }
//         cout<<endl;
//     }
// }

// Output = 5
// 1       
// 1 2     
// 1   3   
// 1     4 
// 1 2 3 4 5

// ================================================================================

//numeric inverted halg pyramid

// 12345
// 2345
// 345
// 45
// 5

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<=n; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// Output = 5
// 12345
// 2345
// 345
// 45
// 5

//=================================================================================

//numeric hollow inverted half pyramid

// 12345
// 2  5 
// 3 5  
// 45   
// 5    

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<=n; j++){
//             if(j==i+1 || j==n || i==0){    //printing hollow pyramid
//                 cout<<j;
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// Output = 4
// 1234
// 2 4 
// 34  
// 4   

// ===============================================================================

// solid half Diamand

// *    
// **   
// ***  
// **** 
// *****
// **** 
// ***  
// **   
// * 

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<2*n-1; i++){
//         int cond=0;
//         if(i<n){
//             cond=i;
//         }else{
//             cond=n-(i%n)-2;
//         }
//         for(int j=0; j<=cond; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// Output = 5
// *    
// **   
// ***  
// **** 
// *****
// **** 
// ***  
// **   
// *   

// =====================================================================