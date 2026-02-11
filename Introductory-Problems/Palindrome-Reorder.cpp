#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;getline(cin,s);
    long long n = s.size();
    vector<long long>freq(26,0);
    for(char c:s) freq[c-'A']++;
    long long odd=0;
    string c="";
    for(int i=0;i<26;i++) if(freq[i]%2==1){
        odd++;
        c=char('A'+i);
    }
    if(odd>1){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    string leftres="";
    for(int i=0;i<26;i++){
        for(long long j=1;j<=freq[i]/2;j++) leftres+=char('A'+i);
    }
    string rightres=leftres;
    reverse(rightres.begin(),rightres.end());
    cout<<leftres<<c<<rightres<<endl;
    return 0;
}