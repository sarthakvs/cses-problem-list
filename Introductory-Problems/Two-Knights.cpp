#include<iostream>
using namespace std;
void compute(long long arr[],long long n,long long i){
    if(i>n) return;
    while(i<=n){
        long long curr = 12 + (4*(arr[1]+arr[3])) -(arr[0]+(6*arr[2]));
        cout<<curr<<endl;
        for(int j=0;j<3;j++) arr[j]=arr[j+1];
        arr[3]=curr;
        i++;
    }
    return;
}

int main(){
    long long n;cin>>n;
    long long arr[4]={0,6,28,96};
    for(long long i=0;i<min(4LL,n);i++) cout<<arr[i]<<endl;
    compute(arr,n,5);
    return 0;
}