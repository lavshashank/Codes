#include<iostream>
#include<vector>
using namespace std;


void print(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }    
}

int main(){
    vector<int> even;
    vector<int> odd;
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {   int ele;
        cin>>ele;
        if (ele%2==0)
        {
            even.push_back(ele);
        }
        else{
            odd.push_back(ele);
        } 
    }

    print(even);
    print(odd);
    
    cout<<endl;
    
    return 0;
}