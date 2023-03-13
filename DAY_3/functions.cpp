#include<iostream>
using namespace std;

//function is a peice of code that makes code more readable and we can 
//call it again and again using function call there are lots of advantages using functions as it will be a well defined task function works on call by value and call by reference

int printnume(int a);// function to display a number
int addnum(int a,int b); // function to display sum of 2 nos.
int getmax(int num1, int num2, int num3); // to get max of 3 nos.
int countingprint(int n);// display counting numbers
char getmarks(int marks); // student grade marks problem
int getsum(int n);// sum of odd numbers
int getevensum(int n);//sum of even numbers
int oddeven(int num); // check wheteher number idsodd or even
int fact(int n); // factorial
float circle(float radius); // to print the area of circle 
int main(){
   //int num1,num2,num3;
  //// cin>>num1>>num2>>num3;
  // cout<<"enter numbers to add:"<<endl;
   //cin>>a>>b;
   //int d=addnum(a,b);
   //cout<<d;
  // int maxi= getmax(num1,num2,num3);
   //cout<<maxi;
   //printnume(a);

  /* int n;
   cin>>n;
   int count=countingprint(n);
   cout<<count;*/
   //int marks;
   //cout<<"Enter the  marks:"<<endl;
   //cin>>marks;

  // char grade=getmarks(marks);

 /*int n;
 cout<<"enter the sum value:"<<endl;
 cin>>n;

 int sum=getevensum(n);
 cout<<sum;*/

// int num;
 //cin>>num;

 //int result= oddeven(num);
 //cout<<result;

// int n;
 //cin>>n;

//int factorial=fact(n);
//cout<<factorial;
float radius;
cin>>radius;

float area=circle(radius);
cout<<area<<endl;
 
}
int printnume(int a){
    cout<<a;
    a++;
}

int addnum(int a, int b){
    int c=a+b;
    return c;
}
int getmax(int num1, int num2, int num3){
    if(num1>num2 && num1>num3){
        return num1;
    }
    else if(num2>num1 && num2>num3){
         return num2;
    }
    else{
        return num3;
    }
}
int countingprint(int n){
    for(int i=0;i<n;i++) {
        cout<<i<<endl;
    }
}
char getmarks(int marks){
    if(marks>90){
        cout<<'A';
    }
    else if(marks>80){
        cout<<'A';
    }
    else if(marks>60){
        cout<<'B';
    }
    else if(marks>50){
        cout<<'C';
    }
    else if(marks>40){
        cout<<'D';
    }
    else{
        cout<<'E';
    }
}
int getsum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
      sum=sum+i;
    }
    return sum;
}

int getevensum(int n){
    int sum=0;
    for(int i=2;i<=n;i+2){
        sum=sum+i;
    }
return sum;
}

int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
       fact=fact*i;

    }
    return fact;
}

float circle(float radius){
    float area;
    area= 3.14*radius*radius;
    return area;
}