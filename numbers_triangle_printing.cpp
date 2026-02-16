#include<iostream>
using namespace std;
int main(){
   // int m;
   // cout<<"enter the number of rows:";
   // cin>>m;
    int n;
    cout<<"enter the number of columns:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}