#include<iostream>
using namespace std;
int main(){
int n,a=0,d=0;
string s;
cin>>n;
cin>>s;
for (int i=0;i<s.length();i++){
    if(s[i]=='A'){
        a++;
    }
    else{
        d++;
    }
}
if(a==d){
    cout<<"Friendship";
}
else if(a>d){
    cout<<"Anton";
}
else{
    cout<<"Danik";
}
}
