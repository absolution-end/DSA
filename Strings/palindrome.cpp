#include<iostream>
#include<algorithm>

using namespace std;
// // palindrome using naive methord and 
// bool ispal(string str) { //O(n)

//     string rev = str;
//     reverse(rev.begin(), rev.end());
//     return (rev == str);
// }
bool ispal(string str){ // this os O(1)
    int begin = 0;
    int end = str.length()-1;
    while(begin<end){
       if(str[begin]!=str[end]){
        return false;
       }else{ 
        begin++;
        end--;
       }return true;
    }
}
// to solve this problem we first 
// 1.) initlize the begin and end of the string 
// 2.) a loop which will run till the begin < end
// 3.) if the begin = end then return  1
// 3.) if the begin != end then return -1
int main()
{
    string str;
    cout << "Enter a string to check if it is a palindrome: ";
    cin >> str;
    cout << "Is the string a palindrome? " << (ispal(str) ? "Yes" : "No") << endl;
    return 0;
}