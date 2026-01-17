#include<iostream>
using namespace std;
int main(){
    int n=0,x=0,y=0,z=0,x1=0,y1=0,z1=0;
    cin>>n;
    while(n--){
        cin>>x>>y>>z;
        x1+=x;
        y1+=y;
        z1+=z;
        
    }
    
    if(x1==0&&y1==0&&z1==0){
    cout<<"YES"<<endl;    
    }
    else 
    cout<<"NO"<<endl;
    
}
    
