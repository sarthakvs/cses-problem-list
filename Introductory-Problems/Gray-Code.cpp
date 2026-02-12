#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    long long n;cin>>n;
    vector<string>orignal={"0","1"};
    for(long long i=2;i<=n;i++){
        vector<string>ulta=orignal;
        reverse(ulta.begin(),ulta.end());
        for(int i=0;i<orignal.size();i++){
            orignal[i] = "0"+orignal[i];
            ulta[i] = "1" + ulta[i];
        }
        for(string s:ulta) orignal.push_back(s);
    }
    for(string s:orignal) cout<<s<<endl;
    
    return 0;
}