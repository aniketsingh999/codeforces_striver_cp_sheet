#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long x,y,n;
        cin>>x>>y>>n;
        int rem=n%x;
        int change=(rem-y+x)%x;
        n-=change;
        cout<<n<<endl;
    }
    return 0;
}