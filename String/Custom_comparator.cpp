#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(char first, char second){
    return first<second;
}

int main(){
        // string str="sushant";
        string str = "babber";

        sort(str.begin(),str.end(),cmp);

        cout<<str<<endl;
        return 0;
}

// Output =ahnsstu
// abbber