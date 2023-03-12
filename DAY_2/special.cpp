//pailandrome- It is a number when we reverse it and return the same number the n number is called as pailandrome

#include<iostream>
using namespace std;
int main(){
   /*  int n,rem,sum=0;
     cout<<"enter a number to check:"<<endl;
     cin>>n;
     int k=n;
     while(n>0){
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
     }
       if(k==sum){
        cout<<"pailandrome:"<<endl;
       }
       else{
        cout<<"not pailandrome:"<<endl;
       }*/
       // products of digits
      /* int n,rem,sum=1;
       cout<<"enter the number:"<<endl;
       cin>>n;
       while(n>0){
         rem=n%10;
         sum=sum*rem;
         n=n/10;
       }
       cout<<sum; */

       // Sum of digits

     /*  int n,rem,sum=0;
       cout<<"enter the number:"<<endl;
       cin>>n;

       while(n>0){
         rem=n%10;
         sum=sum+rem;
         n=n/10;
       }
      cout<<sum<<endl*/

      // reverse the digit

      /*int n,rem,rev=0;
      cout<<"enter the noo.:"<<endl;
      cin>>n;
      while(n>0){
         rem=n%10;
         rev=rev*10+rem;
         n=n/10;
      }
      cout<<rev<<endl;*/

      // Prime number: A number which is divisible by its own number or by1
      /*int n,i,count=0; // this count variable will be increase if prime number condiition is satisfied
      cout<<"enter a number to check:"<<endl;
      cin>>n;
      for(i-0;i<=n;i++){
         if(n%i==0){
            count++;
         }
           }
        if(count==2){
         cout<<"prime hai:"<<endl;
        }
        else{
         cout<<"prime nahi hai"<<endl;
        }*/

        // Composite number= it is a number divisible by other numbers
        /*int n,i,ans,count=0;
        cout<<"enter your number:"<<endl;
        cin>>n;

        for(i=1;i<=n;i++){
         if(n%i==0){
          ans= count+1;
         }
      }
      if(ans>2){
         cout<<"composite:"<<endl;
      }
      else{
         cout<<"not a composite:"<<endl;
      }*/

      //finding the perfect sqare no. or not
     /* int n,i,count=0;
      cout<<"enter the number:"<<endl;
      cin>>n;

      for(i=1;i<=n;i++){
           if(n%i==0){
            count= count+i;
           }
           }
        if(count==2*n){
         cout<<"no is a perfect square"<<endl;
        }
       else{
         cout<<"no is not a perfect square"<<endl;
       }*/
      
      // Factorial number


      int n,fact=1;
      cout<<"enter the number:"<<endl;
      cin>>n;
      
      while(n>0){
         fact=fact*n;
         n=n-1;
      }
      cout<<fact<<endl;


}