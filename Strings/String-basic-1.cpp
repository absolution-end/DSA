#include<iostream>
using namespace std;
// no need to use \0 or \n in C++ style strings
int main(){
    string str = "geeksforgeeks";
    int n =str.length();
    cout<<str.find("en")<<" "<<endl; // if not in the loop then it will print string::npos
    cout<<str.find("en", 5)<<" "<<endl;
    cout<<str.substr(4,5)<<" "<<endl;
    cout<<str+"xyz"<<" "<<endl;
    
    // use of getline function
    string stm; 
    // cout<<"enter your string"<<endl;
    // cin.getline(cin,stm,'a');


    // To traverse a string 
    for(int i=0; i<str.length();i++){
        cout<<str[i]<<endl;
    }
    // another way of doing that is 
    for(char x:str){
        cout<<x;
    }
    return 0;
}
