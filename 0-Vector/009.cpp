#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    for (int i = 0; i < 5; i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    // for each loop

    for(int ele:v){
        cout<<ele<<" ";
    }    
    cout<<endl;

    // while loop
    int idx = 0;
    while(idx<v.size()){
        cout<<v[idx++]<<" ";
    }
    cout<<endl;
}
