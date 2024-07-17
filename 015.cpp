#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);

    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }
    int x;
    int count=0;
    cout<<"Enter the number : ";
    cin>>x;

    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]+v[i+1]==x){
            count+=1;
        }
        
    }
    cout<<"Ans: "<<count<<endl;
    
    return 0;
}