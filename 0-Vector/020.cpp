// Two pointer question


#include<iostream>
#include<vector>
using namespace std;


int sortZero(int count, int val){
    for (int i = 0; i < count; i++)
    {
        cout<<val<<" ";
    }
    
}

int main(){

    vector<int> v(6);
    int count =0;

    for (int i = 0; i < 6; i++)
    {
        cin>>v[i];
        if(v[i]==0){
            count++;
        }
    }

    int numZero = sortZero(count,0);

    int numOne = sortZero(6-count,1);
  
    cout<<endl;
    
    return 0;
}
