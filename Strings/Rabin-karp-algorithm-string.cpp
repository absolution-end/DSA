#include<iostream>
#include<algorithm>
#include<climits>       
#include<string>
#include<cstring>

using namespace std;
// Rabin-Karp Algorithm for Pattern Searching
// qudratic in worst case but linear in average case
// It is a combination of hashing and sliding window technique
// It is used to find the pattern in the text
// It is used in plagiarism detection
// It is used in bioinformatics
// It is used in data mining
// It is used in search engines
// It is used in virus detection
// It is used in DNA sequencing
// It is used in data compression
// It is used in speech recognition
// It is used in file comparison

// * 1.) like navie algorithm, slide the pattern one by one
// * 2.) compare hash values of the pattern current text window. if hash match then only compare individual characters.

void RBSearch(string pattern, string text, int m, int n){
    int h=1;
    int q = 101;
    int d = 256;
    // compute d^(m-1)%q
    for(int i=0;i<m-1;i++){ // this loop does the work of (d^m-1)%q
        h = (h*d)%q;
    }
    // compute p and t0
    int p=0, t=0;
    for(int i=0;i<m;i++){
        p = (d*p + pattern[i])%q;
        t = (d*t + text[i])%q;
    }
    // Check the spurious hits
    for(int i=0;i<=n-m;i++){
        if(p==t){
            bool flag = true;
            for(int j=0;j<m;j++){
                if(text[i+j]!=pattern[j]){
                    flag = false;
                    break;
                }
                if(flag == true){
                    cout<<i<<endl;
                }
            }
        }
        // put everything in the formula. Compute (Ti+1) using Ti. 
        if(i<n-m){
            t=((d*(t-text[i]*h)+text[i+m])%q);
            if(t<0){
                t = t+q;
            }
        }
    }
}
int main(){
    cout<<"Enter the text:";
    string text;
    getline(cin,text);
    cout<<"Enter the pattern:";
    string pattern;
    getline(cin,pattern);
    RBSearch(pattern,text,pattern.length(),text.length());
    return 0;
}