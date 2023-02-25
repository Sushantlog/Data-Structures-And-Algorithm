
#include<iostream>
#include<string.h>

using namespace std;

// int main(){
//     char name[100]="Sushant Balu Patil"; //initiation

//     cout<<name;

//     return 0;
// }

// Output = Sushant Balu Patil
// ==========================================================

// take input from user

// int main(){
//      char ch[100];
//      cin>>ch;
//     //not read any space,tab
//      cout<<"Character array is : "<<ch;  
// }

// Output = 
// Sushant
// Character array is : Sushant

// Sushant Balu Patil
// Character array is : Sushant

// =============================================================

// using getline can be read space

// int main(){
//      string name;
//      cout<<"Plase enter your full name : ";
//      getline(cin,name);
//      cout<<"Hello, "<<name<<" !"<<endl;
//      return 0;
// }

// Output = Plase enter your full name : Sushant Balu Patil
// Hello, Sushant Balu Patil !

// ========================================================

// int main(){
//      char ch[100];
//      ch[0]='a';
//      ch[1]='b';
//      cin>>ch[2];
     
//      cout<<ch[0]<<ch[1]<<ch[2]<<endl;
// }
// Output = c
// abc
// =============================================================

// int main(){
//      char name[100];
//      cin>>name;

//      for(int i=0;i<8;i++){
//           cout<<"Index : "<<i<<" value : "<<name[i]<<endl;
//      }
// }
// Output = Sushant
// Index : 0 value : S
// Index : 1 value : u
// Index : 2 value : s
// Index : 3 value : h
// Index : 4 value : a
// Index : 5 value : n
// Index : 6 value : t
// Index : 7 value :      //null charater

// =====================================================

// int main(){
//      char name[100];
//      cin>>name;

//      for(int i=0;i<8;i++){
//           cout<<"Index : "<<i<<" value : "<<name[i]<<endl;
//      }
//      for(int i=0;i<8;i++){
//         int value = (int)name[i];
//         cout << "value is : " << value << endl;
//      }
// }
// Sushant
// Index : 0 value : S
// Index : 1 value : u
// Index : 2 value : s
// Index : 3 value : h
// Index : 4 value : a
// Index : 5 value : n
// Index : 6 value : t
// Index : 7 value :  
// value is : 83      
// value is : 117     
// value is : 115     
// value is : 104     
// value is : 97      
// value is : 110     
// value is : 116     
// value is : 0   

// ======================================================

// Find out length of charater array
// int getLength(char name[]){
//      int length = 0;
//      int i =0;
     
//      while(name[i]!='\0'){
//           length++;
//           i++;
//      }
//      return length;
// }
// int main()
// {
//      char name[100];
//      cin>>name;

//      cout<<"Length is : "<<getLength(name)<<endl;
//     // cout<<"Length is : "<<strlen(name)<<endl;
// }

// Output = patil
// Length is : 5

// Aaba
// Length is : 4
// Length is : 4
// ==================================================

// Reverse of string 

// int getLength(char name[]) {
//         int length = 0;
//         int i = 0; 

//         while(name[i] != '\0') {
//                 length++;
//                 i++;
//         }
//         return length;
// }
// void reverseCharArray(char name[]){
//      int i=0;
//      int n=getLength(name);        //fuction calling 
//     //  int n=strlen(name);
//      int j=n-1;

//      while(i<=j){
//           swap(name[i],name[j]);
//           i++;
//           j--;
//      }
// }
// int main(){
//      char name[100];
//      cin>>name;

//      cout<<"Initiala string is : "<<name<<endl;
//      reverseCharArray(name);
//      cout<<"Reverse of string is : "<<name<<endl;
//      return 0;
// } 

// Output = Sushant
// Initiala string is : Sushant  
// Reverse of string is : tnahsuS

// Prachi
// Initiala string is : Prachi  
// Reverse of string is : ihcarP
// =========================================================

// Replace all space

// void replaceSpaces(char sentence[ ]){
//     int i =0;
//     int n=strlen(sentence);

//     for(int i=0; i<n; i++){
//         if(sentence[i]==' '){
//             sentence[i]='@';
//         }
//     }
// }
// int main(){
//     char sentence[100];
//     cin.getline(sentence,100);

//     cout<<"initial sentence is : "<<sentence<<endl;
//     replaceSpaces(sentence);
//     cout<<"replace sentence space : "<<sentence<<endl;
//     return 0;
// }

// Output = Computer Science and Engineering
// initial sentence is : Computer Science and Engineering   
// replace sentence space : Computer@Science@and@Engineering
// ============================================================

// find palindrome or not
 
// bool checkPalindrome(char sentence[])
// {
//     int i=0;
//     int n=strlen(sentence);
//     int j=n-1;

//     while(i<=j){
//         if(sentence[i]!=sentence[j]){
//             return false;
//         }else{
//             i++;
//             j--;
//         }
//     }
//     return true;
// }

// int main(){
//     char sentence[100];
//     cin>>sentence;

//     checkPalindrome(sentence);
//     cout<<"palindrome check : "<<checkPalindrome(sentence)<<endl;
//     return 0; 
// }

// Output = 
// Patil
// palindrome check : 0

// anna
// palindrome check : 1

// ====================================================================
