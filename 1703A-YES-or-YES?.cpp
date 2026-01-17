#include<iostream>
using namespace std;
int main(){
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        if(s=="yes"){
        cout<<"YES"<<endl;
         }
        else
        cout<<"NO"<<endl;
    }
    
}
