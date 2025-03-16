#include<iostream>
#include<algorithm>
#include<climits>
#include<cstring>
using namespace std;

// here we are reversing the words in the string

int naiveapp(string s){
    // 1.) Creat a Stack
    // 2.) Push words one by one into the stack
    // 3.) Pop words from the stack and put it back to the string
    // 4.) append int the empty string
    // 5.) return the string
}
void reverse(char str[], int low , int high){
    while(low<=high){
        swap(str[low],str[high]);
        low++;
        high--;
    }
}

// bettrt approach
void reverseword(char str[], int n){
    int start = 0;
    for(int end = 0; end<n; end++){
        if(str[end] == ' '){
            reverse(str,start,end-1);
            start = end+1;
        }
    }reverse(str,start,n-1);
    reverse(str,0,n-1);
}

int main(){
    // char str[] = "Welcome to Gfg";
    char str[1000];
    cout<<"Enter a string:";
    cin.getline(str,1000);
    int n = strlen(str);
    reverseword(str,n);
    cout<<str;
    return 0;
}