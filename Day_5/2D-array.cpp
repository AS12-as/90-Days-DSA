#include<iostream>
using namespace std;
bool findarr(int arr[][3],int row,int col,int key);
int main(){
   //  int arr[3][3]={ {1,4,5},{2,6,7},{2,8,9} }; //declaration of an array
   // cout<<arr[1][2]<<endl; //initialize an array

    // print an array row-wise
   /* cout<<"printing row-wise array [3][3]"<<endl;
    for(int i=0;i<3;i++){
        for (int j= 0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"print column wise"<<endl;
    cout<<"printing col-wise array [3][3]"<<endl;
    for(int i=0;i<3;i++){
        for (int j= 0; j<3; j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
   
   //row wise sum print
   cout<<"thew row wise sum will be "<<endl;
   for(int i=0;i<3;i++){
     int sum=0;
     for(int j=0;j<3;j++){
        sum=sum+arr[i][j];
     }
     cout<<sum<<" ";
   }

   //col wise sum print
   cout<<"thew column wise sum will be "<<endl;
   for(int i=0;i<3;i++){
     int sum=0;
     for(int j=0;j<3;j++){
        sum=sum+arr[j][i];
     }
     cout<<sum<<" ";
   }
 // input row-wise
 int brr[4][4];
 int rows=4;
 int cols=4;

 cout<<"taking input row-wise"<<endl;
 for (int i = 0; i <rows; i++)
 {
    for(int j=0;j<cols;j++){
        cin>>brr[i][j];
    }
 }

 
 cout<<"printing input row-wise"<<endl;
 for (int i = 0; i <rows; i++)
 {
    for(int j=0;j<cols;j++){
        cout<<brr[i][j]<<" ";
    }
      cout<<endl;
 }*/

    // Linear search
    int arr[3][3];
    int row=3;
    int col=3;
    int key;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    cout<<findarr(arr,row,col,key);

    cout << "Enter the key what you want to search: ";
    cin >> key;
    if (findarr(arr, row, col, key))
    {
        cout << "found it";
    }
    else
    {
        cout << "not found it";
    }
}

bool findarr(int arr[][3],int row,int col,int key){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
             if(arr[i][j]==key){
                return true;
                break;
             }
             else{
                return false;
             }
        }
    }
}

