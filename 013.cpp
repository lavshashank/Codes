#include<iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v(6);
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }
    bool flag = true;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i-1]>=v[i]){
            flag = false;
            break;
        }
    }
    
    if(flag == true){
        cout<<"it is a sorted array"<<endl;
    }
    else{
        cout<<"it is not a sorted array"<<endl;
    }
    
}