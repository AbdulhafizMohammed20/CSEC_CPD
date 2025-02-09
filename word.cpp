//Word
#include<iostream>
#include<algorithm>
#include<cctype>
using namespace std;
int main(){
    string s;
    int uppercount=0,lowercount=0;
cin>>s;

for(char C : s){
    if(isupper(C)){
        uppercount++;
    }
    else if (islower(C)){
        lowercount++;
    }
}
if(lowercount>=uppercount  ){
    transform(s.begin(),s.end(),s.begin(),::tolower);
}
else{
    transform(s.begin(),s.end(),s.begin(),::toupper);

}
cout<<s;
}
