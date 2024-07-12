// Given radius of a circle. Write a function to print the area and circumference of the circle.
#include<iostream>
using namespace std;

int circumference(int radius){
    return 2*3.14*radius;
}

int main(){
    int val;
    cin>>val;
    cout<<"Area of circle is "<<circumference(val)<<endl;
 
    return 0;
}