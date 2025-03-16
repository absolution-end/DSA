#include<iostream>
#include<algorithm>
#include<climits>
#include<cstring>
using namespace std;

// It takes O(n) Time Complexity

void ImpNaive(string pattern, string text){
    int n = text.length();
    int m = pattern.length();
    for(int i = 0; i<=n-m;){
        int j;
        for(j = 0; j<m; j++){
            if(pattern[j] != text[i+j]){ //here in text i+j is used because to cheack from startng to end of the pattern
                break;
            }
        }
        if(j == m){
            cout<<i<<" ";
        }
        if(j == 0){
            i++;}
            else{
                i = i+j;
            }
    }
}

int main(){
    string text = "AABAACAADAABAAABAA";
    string pattern = "AABA";
    ImpNaive(pattern,text);
    return 0;
}