#include<iostream>
#include<vector>
using namespace std;

int main(){
    long long n;cin>>n;
    long long actual = ((n*(n+1))/2);
    if(actual%2==1){
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<endl;
    long long target = actual/2;
    vector<long long>set1,set2;
    for(int i=n;i>0;i--){
        if(target>=i){
            target-=i;
            set1.push_back(i); 
        }
        else set2.push_back(i);   
    }
    cout<<set1.size()<<endl;
    for(long long i:set1) cout<<i<<" ";
    cout<<endl;
    cout<<set2.size()<<endl;
    for(long long i:set2) cout<<i<<" ";
    cout<<endl;
    
    return 0;
     
}