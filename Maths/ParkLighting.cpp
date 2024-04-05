#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int light=0;
        light+=x*(y/2);
        if(y%2) light+=ceil(1.0*x/2);
        cout<<light<<endl;
    }
    return 0;
}