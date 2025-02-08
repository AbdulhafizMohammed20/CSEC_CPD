#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int n;
cin>>n;
vector <int> arr;
for(int i=0;i<n;i++){
    int data;
    cin>>data;
    arr.push_back(data);
}
sort (arr.begin(),arr.end());
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
