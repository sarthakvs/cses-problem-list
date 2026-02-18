#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

long long compute(vector<long long>&arr,long long curr,long long &total,long long i){
    if(i==arr.size()) return abs((total-curr)-curr);
    return min(compute(arr,curr+arr[i],total,i+1),compute(arr,curr,total,i+1));
}
int main(){
    long long n;cin>>n;
    vector<long long>arr(n);
    long long total = 0;
    for(long long i=0;i<n;i++){
        cin>>arr[i];
        total+=arr[i];
    }
    long long res = compute(arr,0,total,0);
    cout<<res<<endl;
    return 0;
}