#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the number which you have to check:";
    cin>>x;
    if(x%5==0 && x%3==0){
        cout<<"the number divisible by both 3 and 5";
    }
    else{
        cout<<"the number is not divisible by both 3 and 5";
    }
}

