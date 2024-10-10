#include<bits/stdc++.h>
using namespace std;

void quick_sort(vector<int>&v,int start,int end){
    int n=v.size();
    if(start>=end){
        return;
    }
    int pivot = v[start];
    int i=start,j=end;
    while(i<j){
        while(i<=end && v[i]<=pivot){
            i++;
        }
        while(j>=start && v[j]>pivot){
            j--;
        }
        if(i<j){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    swap(v[start],v[j]);
    quick_sort(v,start,j-1);
    quick_sort(v,j+1,end);
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    quick_sort(v,0,n-1);
    for(auto vl:v){
        cout<<vl<<" ";
    }
    cout<<endl;
}