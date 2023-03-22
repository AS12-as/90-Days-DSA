#include<iostream>
using namespace std;

int main(){
    int arr[4]={11,12,13,14};

   // cout<<arr<<endl;
    //cout<<&arr<<endl;
    //cout<<&arr[0]<<endl;
    //cout<<arr[0]<<endl;
    
    //int *p=arr;
    //cout<<p<<endl;
    //cout<<&p<<endl;

    cout<<*arr<<endl;
    cout<<*arr +1<<endl;
    cout<<(*arr)<<endl;
    cout<<*(arr +1)<<endl;

    int i=0;
    cout<<arr[i]<<endl;
    cout<<i[arr]<<endl;
    cout<<*(arr + i)<<endl;
    cout<<*(i + arr)<<endl;

   cout<<"size of array:"<<sizeof(arr)<<endl; //4*4 size 
   cout<<"size of pointer:"<<sizeof(*arr)<<endl;
   
   cout<<arr+1<<endl;
   // Note: we can print arr+1, Int*p=arr+1; but we can't update our array as arr=arr+1 this is not possible because base address of array could be same

   char ch[20]= "Aman Sengar";
   char *c=ch;

   cout<<ch<<endl;
   cout<<ch[0]<<endl;
   cout<<&ch<<endl;
   cout<<*c<<endl;
   cout<<&c<<endl;


   char bh[20]= "Samajhdar Bano";
   char *cptr=&bh[0];

   cout<<bh<<endl;
   cout<<&bh<<endl;
   cout<<&bh[0]<<endl;
   cout<<*(bh+3)<<endl;
   cout<<cptr<<endl;
   cout<<*cptr<<endl;
   cout<<*(cptr+2)<<endl;
   cout<<*cptr*2<<endl;
   cout<<*cptr+1<<endl;




}