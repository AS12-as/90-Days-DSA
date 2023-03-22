#include<iostream>
using namespace std;

int main(){

   // int a=5;
    // cout<<a<<endl;
    //cout<<&a<<endl; finding adress using & operator
    //let's start the pointer

    int a=45;
    int *p=&a;
    cout<<&p<<endl;
    cout<<*p<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    
    int *q=p;
    // copy of pointer
    cout<<*q<<endl;
    cout<<&q<<endl;
    cout<<q<<endl;
    cout<<p<<endl;

    int *r=p;
    cout<<*r<<endl;
    cout<<r<<endl;

    char *ptr;
    char str[] ="abcdefg";
    ptr = str;
    ptr += 5;
    cout << ptr;
    
    int x=12;
    int *c=&x;

    cout<<"value of x"<<x<<endl;
    cout<<"adrress of x"<<&x<<endl;
    cout<<"value of c"<<c<<endl;
    cout<<"the value of address of c"<<&c<<endl;
    cout<<"the pointer value of c"<<*c<<endl;
    cout<<*c*2<<endl;
    cout<<(*c)++<<endl;
    cout<<*c/2<<endl;
    cout<<++*c<<endl;
}