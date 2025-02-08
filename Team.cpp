#include<iostream>
using namespace std;
int main(){
int n,p,v,t,problems=0;
cin>>n;
for(int i=0;i<n;i++){
        cin>>p>>v>>t;
    if((p==1 && v==1 && t==1)|| (p==1 && v==1 && t==0) || (p==0 && v==1 && t==1) || (p==1 && v==0 && t==1)){
        problems++;
    }
    else{
        continue;
    }
}
cout<<problems;
}
