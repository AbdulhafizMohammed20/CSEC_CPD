#include <iostream>
using namespace std;
int main(){
int n,h,c=0;
cin>>n>>h;
int arr[n];
for (int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]<=h){
        c++;
    }
    else{
        c=c+2;
    }
}
cout<<c;
}
