#include<iostream>
#include<algorithm>

using  namespace std;


bool subseq(const string &stri,const string &strj, int n, int m){
     if(m==0)
     return true;
     if(n==0)
     return false;
     if(stri[n-1]==strj[m-1])
     return subseq(stri,strj,n-1,m-1);
     else
     return subseq(stri,strj,n-1,m);
}

int main(){
    int n=3,m=2;
    string str1="abc",str2="ac";
    cout<<subseq(str1,str2,n,m)<<endl;
    return 0;
}