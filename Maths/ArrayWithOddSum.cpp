#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        long long sum=0;
        for (int i = 0; i < n; i++) {
            cin>>v[i];
            sum+=v[i];
        }
        if(sum%2==0){
            if(n%2==0){
                int od=0,ev=0;
                for (int i = 0; i < n; i++) {
                    if(v[i]%2==0){
                        ev++;
                    } else{
                        od++;
                    }
                }
                if(od!=0 && ev!=0){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            } else{
                int od=0;
                for (int i = 0; i < n; i++) {
                    if(v[i]%2!=0){
                        od++;
                        break;
                    }
                }
                if(od!=0){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }  
        } else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}