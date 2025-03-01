// #include<iostream>
// using namespace std;

// int main(){
//     string str = "geeksforgeeks";
//     int count[26] = {};
//     for(int i =0;i< str.length();i++){
//         count[str[i]-'a']++;
//     }
//     for(int i =0;i<26;i++){
//         if(count[i]>0){
//             cout<<(char)(count[i]+'a')<<' ';
//             cout<<count[i]<<endl;
//         }
//     }
//     return 0;
// }

// to find the frequency of each character in a string
#include<iostream> 
#include<algorithm>
using namespace std;


int main(){
    string str = "geeksforgeeks";
    int count[26]={};
    for(int i=0; i<str.length(); i++){
        count[str[i]-'a']++;
    }
    for(int j=0; j<26; j++){
        if(count[j]>0){
            cout<<(char)(count[j]+'a')<<' ';
            cout<<count[j]<<endl;
        }
    }

    return 0;
}