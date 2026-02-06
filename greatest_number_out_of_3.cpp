#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter first number x:";
    cin>>x;
     int y;
    cout<<"enter second number x:";
    cin>>y;
     int z;
    cout<<"enter third number x:";
    cin>>z;
    if(x>y && x>z){
        cout<<"x is the greatest number";
    }
    else if(y>x && y>z){
        cout<<"y is the greatest number";
    }
    else{
        cout<<"z is the greatest number";
    }

}

