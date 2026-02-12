#include<iostream>
using namespace std;
int check_even_odd(int n){
    // cout<<"enter the value of n:";
   // cin>>n;
    if(n%2==0){
        cout<<"the number is even"<<endl;
    }
    else{
        cout<<"the number is odd"<<endl;
    }
}
int check_prime(int n){
   // cout<<"enter the value of m:";
   // cin>>m;
   int prime;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime = false;
        }
    }
        if(n<=1){
            cout<<"not a prime number"<<endl;
        }
        else if(prime){
            cout<<"the number prime number"<<endl;
     
    }
    else{
        cout<<"not a prime number"<<endl;
    }
  }    
int check_positive_negative_zero(int n){
    // cout<<"enter the value of p:";
    //cin>>p;
    if(n>0){
        cout<<"the number is positive"<<endl;
    }
    else if(n<0){
        cout<<"the number is negative"<<endl;
    }
    else{
        cout<<"the number is zero"<<endl;
    }
  }  
  int Fibonacci(int n){
    int a=0,b=1,next_term;
        for(int i=0;i<=n;i++){
            cout<<a<<" ";
            next_term = a+b;
            a = b;
            b = next_term;
        }
  }
  int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;

    check_even_odd(n);
    check_prime(n);
    check_positive_negative_zero(n);
    Fibonacci(n);
    return 0;
  }


