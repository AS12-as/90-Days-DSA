#include<iostream>
using namespace std;

void printarray(int arr[], int size);
void inc(int arr[],int size);
int find(int arr[],int size, int key);
int main(){
    /*int arr[5]={1,3,4,5,6};// array declaration
    cout<<arr[3];
    cout<<endl;
    for(int i=0;i<5;i++){ //printing all elements of an array
        cout<<arr[i]<<" ";
     }
     cout<<endl;*/
     
   /*  int brr[50];
     int n;
     cin>>n;
     // taking input of array elements and print their triples
     for(int i=0;i<n;i++){
        cin>>brr[i];
     }
     for(int i=0;i<n;i++){
        cout<<3*brr[i]<<" ";
     }*/
    /* int arr[10]={1,3,4,2,4,54};
     //make all elements of array to -1
     for(int i=0;i<10;i++){
        arr[i]=-1;
    }
     for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
     }*/
    
    // when we pass array into the functions then it is always be pass by reference
   /* int arr[]={5,6,7,8};
    int size=4;

    inc(arr,size);
    
    printarray(arr,size);// increament in array and theen printing array
   
    
}

void printarray(int arr[], int size){
   for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
   }
}
void inc(int arr[],int size){
   arr[0]=arr[0]+10;
   printarray(arr,size);
}
*/

//linear search
/*int arr[]={1,2,3,4,5,6,7,8};
int size=8;
int key=6;

bool ans= find(arr,size,key);
if(ans==true){
   cout<<"element found";
}
else{
   cout<<"not found";
}*/

/*bool flag=0; //flag=0 if element notfound if  found flag=1

for(int i=0;i<size;i++){
   if(arr[i]==key){
      flag=1;
      break;
   }
}
if(flag=1){
   cout<<"element found";
}
else{
   cout<<"not found any element";
}*/
// count 0's and 1's and 2's in an array
/*int arr[]={1,0,2,1,0,2,1,1,0};
int size=9;

int countzero=0;
int countone=0;
int counttwo=0;

for(int i=0;i<size;i++){
   if(arr[i]==0){
      countzero++;
   }
   if(arr[i]==1){
       countone++;
   }
   if(arr[i]==2){
       counttwo++;
   }
   }
   cout<<countzero<<endl;
   cout<<countone<<endl;
   cout<<counttwo<<endl;
}*/
// reverse an array
/*int arr[]={10,3,4,23,5,67,8};
int size=8;

int start=0;
int end=size-1;

while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
}
for(int i=0;i<size;i++){
   cout<<arr[i]<<" ";
}*/

// extreme print in an array
int arr[]={10,20,30,20,40,50,60};
int size=7;

int start=0;
int end=size-1;

while(start<=end){
   if(start==end){
      cout<<arr[start]<<endl;
   }
   else{
      cout<<arr[start]<<" ";
      cout<<arr[end]<<" ";
   }
   start++;
   end--;
}
   
}


int find(int arr[],int size, int key){
   for(int i=0;i<size;i++){
      if(arr[i]==key){
         return true;
         
      }
      else{
         return false;
      }
   }
}

