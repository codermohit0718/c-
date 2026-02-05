#include<iostream>
using namespace std;
int main(){
    int length;
    int breadth;
    cout<<"enter the length of rectangle:";
    cin>>length;
    cout<<"enter the breadth of rectangle:";
    cin>>breadth;
    //int area;
    int area_of_rectangle = length*breadth;
    cout<<"the area of rectangle is:";
    cout<<area_of_rectangle;
    cout<<endl;
    int perimeter_of_rectangle = (length+breadth);
    cout<<"the perimeter of rectangle is:";
    cout<<perimeter_of_rectangle;
    cout<<endl;

    if(area_of_rectangle<perimeter_of_rectangle){
        cout<<"perimeter of rectangle is greater than the area of rectangle";
    }
    else{
        cout<<"area of rectangle is greater than the perimeter of rectangle";
    }

}