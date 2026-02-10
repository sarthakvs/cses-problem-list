#include<iostream>
using namespace std;
void permutations(long long n){
    if(n==2 || n==3){
        cout<<"NO SOLUTION";
        return;
    }
    long long i=2;
    while(i<=n){
        cout<<i<<" ";
        i+=2;
    }
    i=1;
    while(i<=n){
        cout<<i<<" ";
        i+=2;
    }
    return;
}
int main(){
    long long n;cin>>n;
    permutations(n);
    return 0;
}