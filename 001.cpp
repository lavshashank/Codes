#include<iostream>
using namespace std;

int sqt(int a){
    int i=1;
    while(i*i<=a){
        i++;
    }
    return i-1;
}

int main(){
    int a(5);
    cout<<sqt(a)<<endl;
    return 0;
}