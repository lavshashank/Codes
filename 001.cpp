#include<iostream>
using namespace std;

int sqt(int a){
    int i=1;
    while(i<=a){
        cout << i*i << endl;
        i++;
    }
return a;
}

int main(){
    int ans= sqt(5);
    return 0;
}