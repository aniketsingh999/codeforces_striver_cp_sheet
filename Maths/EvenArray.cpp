#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, od=0, ev=0, pos=0;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin>>v[i];
            if(v[i]%2){
                if(i%2==0){
                    pos++;
                }
                od++;
            } else{
                ev++;
                if(i%2){
                    pos++;
                }
            }
        }
        if(n%2==0){
            if(od==ev){
                cout<<pos/2<<endl;
            }else {
                cout<<-1<<endl;
            }
        } else{
            if(ev-1==od){
                cout<<pos/2<<endl;               
            }else{
                cout<<-1<<endl;
            }
        }
        
    }
    return 0;
}