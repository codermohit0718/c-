#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number whose table you have to find:";
    cin>>num;
    cout<<"enter the table of given number";
    for(int i=1;i<=10;i++){
        cout<<endl <<num*i<<endl;
    }
}