#include<iostream>
#include<string>
using namespace std;

// int main(){
//     string str;

//     getline(cin,str);
    
//     cout<<str<<endl;

//     return 0;
// }

// Output =
// sant gajanan maharaj college of engineering mahagon 
// sant gajanan maharaj college of engineering mahagon

// =============================================

// int main(){
//     string str;

//     getline(cin,str);

//     cout<<"String is "<<str<<endl;

//     cout<<"length of string : "<<str.length()<<endl;
    
//     cout<<"isEmpty : "<<str.empty()<<endl;

//     str.push_back('A');
//     cout<<str<<endl;

//     cout<<str.substr(1,3)<<endl; //find out substring 

//     cout<<str<<endl;

// }

// Output =
// ujwala
// String is ujwala    
// length of string : 6
// isEmpty : 0
// ujwalaA
// jwa
// ujwalaA

// ============================================================

// compare string 

// int main(){
//     string a ="Atomic";
//     string b ="Atomic";

//     if(a.compare(b)==0){
//         cout<<" a and b are exactly same strings "<<endl;
//     }
//     else{
//         cout<<"a and b are not same "<<endl;
//     }
// }

// Output =  a and b are exactly same strings 

// int main(){
//     string x =" baba ";
//     string y =" babab ";

//     string p ="bbbbc";
//     string q ="bbbb";

//     string s ="aai";
//     string t ="aai";

//     cout<<x.compare(y)<<endl;
//     cout<<p.compare(q)<<endl;
//     cout<<s.compare(t)<<endl;
// }

// Output = //comparation is depent on < and > and == ascii value
// -1
// 1
// 0

// ===============================================

// find out string present or not

// int main(){
//     string str ="hello jee kaise ho saare ";
//     // string sentence ="Everyone";
//     string sentence = "hello";

//     cout<<str.find(sentence)<<endl;
// }

// Output = 
// 4294967295
// 0 (sentence is fing at 0th position)


// int main(){
//     string str ="hello jee kaise ho saare ";
//     string sentence ="Everyone";
//     // string sentence = "hello";

//     cout<<str.find(sentence)<<endl;

//     // npos =>no position is find
//     if(str.find(sentence)==string::npos){
//         cout<<"Not found "<<endl;
//     }
// }

// Output = 
// 4294967295
// Not found 

// ===============================================
// int main(){
//     string str ="This is my first Message ";
//     string word ="Sushant";

//     str.replace(11,5,word);
//     cout<<str<<endl;
// }

// Output = This is my Sushant Message 


// int main(){
//     string str ="This is my first Message ";
//     // string word ="Sushant";

//     // str.replace(11,5,word);
//     str.replace(11,5,"Second");
//     cout<<str<<endl;
// }

// Output = This is my Sushant Message 
// This is my Second Message 

// =============================================
// Erase 
// int main(){
//     string str ="ABCDEFGHIJKLMN";
//     str.erase(0,4);
//     cout<<str;

//     return 0;
// }

// Output =ABCDEFGHIJ
// EFGHIJKLMN



// =============================== Question ===========================================

int main(){
    string str="Sushant";

    cout<<str.length()<<endl;
    string part ="ant";
    cout<<str.find(part); //find index value of part sting in main string
}

// Output =
// 7
// 4