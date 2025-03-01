#include <iostream>
#include <algorithm>
using namespace std;

const int CHAR =256;

bool anagram(string str1, string str2){
    int count[CHAR] = {0};
    if(str1.length()!=str2.length()){
        return false;
    }
    for(int i=0; i<str1.length(); i++){
        count[str1[i]]++;
        count[str2[i]]--;
    }
    for(int i=0; i<CHAR; i++){
        if (count[i]!=0){
            return false;
        }
    }
    return true;
}

int main(){
    string str1, str2;
    cout<<"Enter a string:"<<endl; cin>>str1;
    cout<<"Enter a string to find that if it is an anagram or not:"<<endl; cin>>str2;
    cout<<"Is string an anagram:"<<(anagram(str1,str2) ? "Yes":"No")<<endl;
    return 0;
}