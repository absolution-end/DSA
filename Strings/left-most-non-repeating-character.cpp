#include<iostream>
#include<algorithm>
using namespace std;

// here we are finding the left most non repeating character in the string
// here we are using the concept of flags

int nonrp(string s){
    for(int i=0;i<s.length();i++){
        bool flag = false;
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j]){
                flag = true;
                break;
            }
        }if (flag==false){
            return i;
        }
    }
}

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<"The left most non repeating character is: "<<s[nonrp(s)]<<endl;
    return 0;
}