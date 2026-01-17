#include<iostream>
using namespace std;
int main(){
    int n,countA=0,countD=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        
        if(s[i]=='A'){
            countA+=1;
        }
        else if(s[i]=='D'){
            countD+=1;
        }
    }
    if(countA>countD){
        cout<<"Anton"<<endl;
    }
    else if(countA<countD){
        cout<<"Danik"<<endl;
    }
    else
    cout<<"Friendship"<<endl;
}
