#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
int main() {
    long long x, y, z;
    long long res;
    cin>>x>>y>>z;
    long long cuc=0;
    cuc+=x/z;
    cuc+=y/z;
    long long b1=x%z, b2=y%z;
    if(b2+b1>=z){
        if(b1>b2){
            res=z-b1;
            cuc++;
        }else{
            res=z-b2;
            cuc++;
        }
    } else{
        res=0;
    }
    cout<<cuc<<" "<<res;
    return 0;
}