#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m;
    vector<int> arr(m);
    for(int i=0;i<arr.size();i++){
        cin>> arr[i];
    }for(int i=arr.size()-1;i>=0;i--){
        cout<< arr[i]<<" ";
    }
}
