#include<iostream>
#include<algorithm>
#include<climits>
#include<cstring>
#include<string>
using namespace std;

// Check for Rotation
// Given two strings s1 and s2. Check if s2 is a rotated version of s1.

bool checkrotation(string s1, string s2){
    if(s1.length() != s2.length()){
        return false;
    }
    return ((s1+s2).find(s2) != string::npos);
}

int main(){
    string s1,s2;
    cout<<"Enter the first string:";
    cin>>s1;
    cout<<"Enter the second string:";   
    cin>>s2;
    cout<<(checkrotation(s1,s2))<<endl;
    return 0;
}