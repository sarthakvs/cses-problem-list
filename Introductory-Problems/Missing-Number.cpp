#include<iostream>
using namespace std;
int main(){
    long long n;cin>>n;
    long long expected = (n*(n+1))/2;
    long long actual = 0,temp;
    for(int i=1;i<n;i++) {
        cin>>temp;
        actual+=temp;
    }
    cout<<expected-actual;
    return 0;
}