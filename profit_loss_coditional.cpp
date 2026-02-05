#include<iostream>
using namespace std;
int main (){
    int cp;
    cout<<"enter the cost price of product";
    cin>>cp;
    int sp;
    cout<<"enter the selling price of product";
    cin>>sp;
    if(sp<cp){
        cout<<"you suffer from loss by doing selling this product";
        cout<<"loss is:"<<cp-sp;
    }
    else if (sp=cp){
        cout<<"your bussiness not in profit nor in loss";
       
    }
    else{
        cout<<"you are in loss";
         cout<<"profit is:"<<sp-cp;
    }
}
