#include<iostream>
using namespace std;

int main(){
    /* solid rectangle
    /int n;
    cin>>n;
    int i,j;

    for(i=0;i<4;i++){
        for(j=0;j<6;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;*/

    
    // square pattern
/*
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }*/

    //Hollow rectangle
   /* int rownum,colnum;
    cin>>rownum;
    cin>>colnum;

    for(int i=0;i<rownum;i++){
        if(i==0|| i==rownum-1){
        for(int j=0;j<colnum;j++){
            cout<<"*";
        }
        }
        else{
            cout<<"*"; // printing first star in row 1
            for(i=0;i<rownum-2;i++){
                cout<<" ";
            }
            //last row print star
            cout<<"*";

        }
        cout<<endl;
    }*/
    /*int m;
    cin>>m;
    int row,col;
    for(row=0;row<m;row++){
        for(col=0;col<m+1;col++){
            cout<<"*";
        }
        cout<<"  ";
    }
    cout<<endl;

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;*/
    cout<<"numeric pyramid"<<endl;
    // numeric pyramid

    /*int n;
    cin>>n;

    for(int i=0;i<n;i++){
         for(int j=0;j<i+1;j++){
            cout<<j+1;
         }
         cout<<endl;
    }

    cout<<"inverted numeric pyramid"<<endl;
     for(int i=0;i<n;i++){
         for(int j=0;j<n-i;j++){
            cout<<n-j;
         }
         cout<<endl;
    }*/

    // full pyramid
      int space, rows;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int i = 1, k = 0; i <= rows; ++i, k = 0) {
        for(space = 1; space <= rows-i; ++space) {
            cout <<"  ";
        }

        while(k != 2*i-1) {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    
    return 0;
}
