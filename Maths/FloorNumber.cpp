#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        int fl=0;
        cin>>n>>x;
        n-=2;
        fl++;
        if(n<=0){
            cout<<fl<<endl;   
        } else{
            if(n%x!=0){
                fl++;
            }
            fl+=n/x;
            cout<<fl<<endl;
        }
    }
    return 0;
}