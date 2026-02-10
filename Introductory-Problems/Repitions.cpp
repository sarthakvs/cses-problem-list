#include<iostream>
#include<string>
using namespace std;


int main(){
    string s;
    getline(cin,s);
    long long res = 1,n=s.size(),curr=1;
    for(long long i=1;i<n;i++){
        if(s[i]==s[i-1]) curr++;
        else curr=1;
        res = max(res,curr);
    }
    cout<<res;
    return 0;
}
