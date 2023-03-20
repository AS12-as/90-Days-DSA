
#include<iostream>
#include<vector>
using namespace std;

int main(){
  /* vector<vector<int>>arr;

   vector<int>a{1,2,3};
   vector<int>b{2,4,6};
   vector<int>c{1,3,7};

   arr.push_back(a);
   arr.push_back(b);
   arr.push_back(c);

   for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr[i].size();j++){ //arr[0] use when every rows have same ciols if diffrent cols use arr[i]
        cout<<arr[i][j]<<" ";
    } 
    cout<<endl;
   }*/

   int rows=5;
   int col=3;

  // vector<vector<int>>arr(rows,vector<int>(col,0));
  vector<vector<int>>arr(5,vector<int>(3,-1));
   for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr[i].size();j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
}