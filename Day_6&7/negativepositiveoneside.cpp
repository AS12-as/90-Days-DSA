#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{-2,4,5,-6,3,6,8};
    int l=0;
    int n=arr.size()-1;
    int h=n-1;
    while(l<h){
        if(arr[l]<0){
            l++;
        }
        else if(arr[h]>0){
            h--;
        }
        else{
            swap(arr[l],arr[h]);
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

}