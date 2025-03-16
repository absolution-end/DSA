#include<iostream>
#include<algorithm>
#include<climits>
#include<cstring>
#include<string>

// Also known as sliding window approach
using namespace std;

int naiveapp(string pattern, string text){
    int n = text.length();
    int m = pattern.length();
    for(int i = 0; i<=n-m; i++){
        int j;
        for(j = 0; j<m; j++){ // j is the pointer for pattern -> this loop is for checking the pattern
            if(pattern[j] != text[i+j]){
                break;
            }    
        }
        if(j==m){
            return i;
        }
    }
}

int main(){
    string pattern, text;
    cout<<"Enter the pattern:";
    getline(cin,pattern);
    cout<<"Enter the text:";
    getline(cin,text);
    naiveapp(pattern,text);
    cout<<"Pattern\n"<<pattern<<endl;
    cout<<"Text\n"<<text<<endl;
    // cout<<"pattern"<<pattern<<"Text\n"<<text<<endl;
    return 0;
}