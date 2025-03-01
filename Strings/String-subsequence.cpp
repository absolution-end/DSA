#include<iostream>
#include<algorithm>

using namespace std;
// in subsequence we if a string have "n" alphabets then there will be "2^n" possiblity of string subsequence 
// the time complexity of this code will be O(n+m)
bool subseq(string stri, string strj){
    int i=0;
    int j=0;
    while (j<strj.length()&&i<stri.length()){
        if(stri[i]==strj[j]) {
            j++;
            }
        i++;
        }
    return (j==strj.length());// when all alpha completed t
    }

int main(){
    string stri;
    cout << "Enter a sring: ";
    cin >> stri;
    string strj;
    cout << "Enter a subsequent string if it is a true it will print yes else no ";
    cin >> strj;
    cout << "Is the string a Subsequent? " << (subseq(stri,strj) ? "YES":"NO") << endl;
    return 0;
}