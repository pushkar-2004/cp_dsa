#include<bits/stdc++.h>
using namespace std;

void merge_sort(vector<int>&v){
    if(v.size()==1 || v.size()==0){
        return;
    }
    int left = 0;
    int right = v.size()-1;
    int mid = (left+right)/2;
    vector<int>left_arr,right_arr;
    for(int i=0;i<=mid;i++){
        left_arr.push_back(v[i]);
    }
    for(int i=mid+1;i<=right;i++){
        right_arr.push_back(v[i]);
    }
    merge_sort(left_arr);
    merge_sort(right_arr);
    right=0;
    int i=0;
    while(left<left_arr.size() && right<right_arr.size()){
        if(left_arr[left]<right_arr[right]){
            v[i++]=left_arr[left++];
        }
        else{
            v[i++]=right_arr[right++];
        }
    }
    while(left<left_arr.size()){
        v[i++]=left_arr[left++];
    }
    while(right<right_arr.size()){
        v[i++]=right_arr[right++];
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    merge_sort(v);
    for(auto vl:v){
        cout<<vl<<" ";
    }
    cout<<endl;
}