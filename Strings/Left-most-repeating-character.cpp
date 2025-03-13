#include<iostream>
#include<algorithm>
using namespace std;

// Here we are going to find leftmost character
// Naive approach
int ledtmost(string s){
    int count[256] = {0};
    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
            if(s[i] == s[j]){
                return i;
            }
        }
    }
    return -1;
}
// Efficient approach
int leftmosteff(string s){
    int count[256] = {0};
    for(int i=0; i<s.length(); i++){
        count[s[i]]++;
    }
    for(int j=0; j<s.length(); j++){
        if(count[s[j]]>1){
            return j;
        }
    }
    return -1;
}


int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<ledtmost(s);
    cout<<endl;
    cout<<"Efficient approach: ";
    cout<<leftmosteff(s);
    return 0;
}

