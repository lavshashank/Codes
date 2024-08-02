#include<iostream>
#include<vector>
using namespace std;

int main (){
    vector<int> v(6);
    for(int i; i<v.size();i++){
        cin>>v[i];
    }
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if(n<v[i]){
            count++;
        }
    }
    cout<<"answer is : " <<count<<endl;
    
    return 0;
}