#include<iostream>
#include<algorithm>
using namespace std;
int main(){
string First,Second;
cin>>First>>Second;

transform (First.begin(),First.end(),First.begin(),::toupper);
transform (Second.begin(),Second.end(),Second.begin(),::toupper);
if(First==Second){
cout<<0;
}
else if(First>Second){
cout<<1;
}
else{
cout<<-1;
}
}
