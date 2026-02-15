#include<iostream>
#include<string>
#include<vector>
using namespace std;


void compute(vector<string>&res,vector<int>freq,int n,string curr=""){
    if(curr.size()==n){
        res.push_back(curr);
        return;
    }
    for(int i=0;i<26;i++){
        if(freq[i]>0){
            freq[i]--;
            compute(res,freq,n,curr+(char)(i+'a'));
            freq[i]++;
        }
    }
    return;
}
int main(){
    string s;
    getline(cin,s);
    int n = s.size();
    vector<int>freq(26,0);
    for(char c:s) freq[c-'a']++;
    vector<string>res;
    compute(res,freq,n);
    cout<<res.size()<<endl;
    for(string t:res) cout<<t<<endl;
    return 0;
}