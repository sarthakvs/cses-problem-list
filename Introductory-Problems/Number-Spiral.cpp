#include<iostream>
using namespace std;
int main(){
    long long t;cin>>t;
    while(t--){
        long long x,y,res;cin>>x>>y;
        if(y>x){
            if(y%2==1) res = (y*y) - x + 1;
            else res = ((y-1)*(y-1)) + x; 
        } else if(x>y){
            if(x%2==0) res = (x*x) - y + 1;
            else res = ((x-1)*(x-1)) + y; 
        }
        else res = (x*x) - (x-1);
        cout<<res<<endl;
    }
    return 0;
}