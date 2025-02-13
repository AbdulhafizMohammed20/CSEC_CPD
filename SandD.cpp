#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,S=0,D=0;
     cin>>n;
     vector <int> myArray;
     for(int i=0;i<n;i++){
            int data;
     cin>>data;
        myArray.push_back(data);
     }
     sort(myArray.begin(),myArray.end());

    while(!myArray.empty()){
    S=S+myArray.back();
    myArray.pop_back();
    D=D+myArray.back();
    myArray.pop_back();
    }
     cout<<S<<"  "<<D;
}
