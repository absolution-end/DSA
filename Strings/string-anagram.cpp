#include<iostream>
#include<algorithm>
// To check is a string is a permutation or not of each other--> also called anagram
using namespace std;

bool ana(string str1, string str2){

    if(str1.length()!=str2.length()){
        return false;
    }
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    return str1==str2;
}

int main(){
    string str1, str2; 
    cout<<"enter a string: "<<endl; cin>>str1;
    cout<<"enter a string to find that a if it is a anagram or not: "<<endl; cin>>str2;
    cout<<"Is string an anagram: "<< (ana(str1,str2)? "Yes":"NO")<<endl;
    return 0;
}
