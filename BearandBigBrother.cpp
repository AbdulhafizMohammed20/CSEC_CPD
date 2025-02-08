#include<iostream>
using namespace std;
int main(){
int L,B,y=0;
cin>>L>>B;
while(L<=B){
    L=L*3;
    B=B*2;
    y++;
}
cout<<y;
}
