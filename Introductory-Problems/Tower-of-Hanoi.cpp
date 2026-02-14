#include<iostream>
using namespace std;

void compute(int n,int start,int end,int via){
    if(n==0) return;
    compute(n-1,start,via,end);
    cout<<start<<" "<<end<<endl;
    compute(n-1,via,end,start);
}

int main(){
    int n;cin>>n;
    cout<<(1<<n) - 1<<endl;
    compute(n,1,3,2);
    return 0;
}