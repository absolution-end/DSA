#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

const int CHAR = 256;
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

// better approach
// here we are using the concept of count array
int betterapp(string s){
    int count[256] = {0};
    for(int i=0;i<s.length();i++){
        count[s[i]]++;
    }
    for(int j=0;j<s.length();j++){
        if(count[s[j]]==1){
            return j;
        }
    }
    return -1;
}

// one treversal approach
// here we are using the concept of count array
int onetreversal(string s){
    int FI[CHAR];
    fill(FI,FI+CHAR,-1);// fill the array with -1 
    for(int i=0;i<s.length();i++){
     if(FI[s[i]]==-1){ // as we used the fill command all the elements on the array are -1
            FI[s[i]]=i;
        }else{
            FI[s[i]]=-2;
        }
    }
    int res = INT_MAX;
    for(int i=0;i<CHAR;i++){
        if(FI[i]>=0){
            res = min(res,FI[i]);
        }
    }return (res==INT_MAX)?-1:res;
}

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<"The left most non repeating character is: "<<s[nonrp(s)]<<endl;
    cout<<"The left most non repeating character is: "<<s[betterapp(s)]<<endl;
    cout<<"The left most non repeating character is: "<<s[onetreversal(s)]<<endl;
    return 0;
}