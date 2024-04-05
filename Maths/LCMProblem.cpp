#include <iostream>
using namespace std;

int main() {
    int t;
    long long a, b, c, d;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a*2<=b){
            c=a;
            d=a*2;
        } else{
            c=-1;
            d=-1;
        }
        cout<<c<<" "<<d<<endl;
    }
    return 0;
}