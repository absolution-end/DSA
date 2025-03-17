#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

const int CHAR = 256;

bool areSame(int ct[], int cp[]) {
    for(int i = 0; i < CHAR; i++) {
        if(ct[i] != cp[i]) {
            return false;
        }
    }
    return true;
}

bool anagramSearch(string pat, string txt){
    int ct[CHAR]={0}, cp[CHAR]={0};
    for(int i=0; i<pat.length(); i++){
        ct[txt[i]]++;
        cp[pat[i]]++;
    }
    for(int i=pat.length(); i<txt.length(); i++){
        if(areSame(ct,cp)){
            return true;
        }
        ct[txt[i]]++;
        ct[txt[i-pat.length()]]--;
    }
    return false;
}

int main(){
    string txt , pat;
    cout<<"Enter the text:";
    cin>>txt;
    cout<<"Enter the pattern:";
    cin>>pat;
    cout<<"it is an anagram hence we can find the location : "<<(anagramSearch(pat,txt)?"Yes":"No");
    return 0;
}