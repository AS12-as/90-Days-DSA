#include<iostream>
#include<vector>
using namespace std;

int findunique(vector<int>arr);

int main(){
    // Let's Start vector
    //vector is a type of dynamic array where we initialize the size of array at run time
    /*vector<int>arr(8);
    cout<<"size of array"<<arr.size()<<endl;
    cout<<"capacity of an array:"<<arr.capacity()<<endl;

    arr.push_back(5);// adding element to our array
    arr.push_back(6);

    for(int i=0;i<arr.size();i++){
          cout<<arr[i]<<" ";
    }
    //size and capacity are 2 most important concepts of dynamic array size defines how much in total elements present in our dynamic array and capacity defines as how much total elements we can initialize to our vector
    arr.pop_back();// remmoving last element to our array
    for(int i=0;i<arr.size();i++){
          cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int>brr(10,101); // initialize our array with 101
    cout<<"size of b:"<<brr.size()<<endl;
    cout<<"capacity of b:"<<brr.capacity()<<endl;
    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }
    cout<<"brr is empty or not:"<<brr.empty()<<endl; // check wheteher your array is empty or not return bool value as always
    */
    //Q1 Finding unique element in an array
   /* int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }

    int uniqueelement=findunique(arr);
    cout<<uniqueelement<<endl;*/

    //Q2 Union of 2 array with no duplicate element
    /*vector<int>arr{10,20,30,40};
    vector<int>brr{50,60,70,80};
    vector<int>unique;
    for(int i=0;i<arr.size();i++){
        unique.push_back(arr[i]);
    }
     for(int i=0;i<brr.size();i++){
        unique.push_back(brr[i]);
    }
    for(int i=0;i<unique.size();i++){
        cout<<unique[i]<<" ";
    }*/

    // finding out the intersection of 2 arrays
   /*vector<int>arr{1,2,4,6,8};
    vector<int>brr{3,4,8,10};
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
         arr[i];
     for(int j=0;j<arr.size();j++){
           if(arr[i]==brr[j]){
            brr[j]=-1;
              ans.push_back(arr[i]);
           } 
     }
    }
    //print ans
    for(auto value: ans){
        cout<<value<<" ";
    }*/
    // pair sum
   /* vector<int>arr={10,20,30,40,50,60,70,80,90};
    int sum=30;

    for(int i=0;i<arr.size();i++){
        arr[i];
        //element will traverse the next element
    for(int j=i+1;j<arr.size();j++){
        arr[j];
        if(arr[i]+arr[j]==sum){
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }
    }*/

    //Find out array triplet dsum
    /*vector<int>arr={10,20,30,40,50,60,70,80,90};
    int sum=100;

    for(int i=0;i<arr.size();i++){
        arr[i];
    for(int j=i+1;j<arr.size();j++){
        arr[j];
    for(int k=j+1;k<arr.size();k++){
        arr[k];
    if(arr[i]+arr[j]+arr[k]==sum){
        cout<<"("<<arr[i]<<','<<arr[j]<<","<<arr[k]<<")"<<endl;
    }
    }
    }
    }*/
    vector<int>arr{0,1,0,0,1,0,1,0,0,1};
    int start=0;
    int end= arr.size()-1;
    int i=0;
    while(i!=end){
        if(arr[i]==0){
            swap(arr[start],arr[i]);
            i++;
            start++;
        }
        else {
            swap(arr[end],arr[i]);
            end--;
        }
        }

for(auto val : arr){
    cout<<val<<" ";
}
}

int findunique(vector<int>arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
    ans=ans^arr[i];
    }

 return ans;
}
