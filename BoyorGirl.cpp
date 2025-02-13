#include<bits/stdc++.h>
using namespace std;
int main(){
 set<char> username;
 string data;
getline(cin,data);
for(char c :data){
    username.insert(c);
}
 int leng=username.size();
 if(leng%2==0){
    cout<<"CHAT WITH HER!";
 }
 else{
    cout<<"IGNORE HIM!";
 }
}
