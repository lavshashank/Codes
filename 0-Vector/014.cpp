#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v(6);
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }
    int even = 0;
    int odd =0;
    for (int i = 0; i < v.size(); i++)
    {
        if(i%2==0){
            even += v[i];
        }
        else{
            odd += v[i];
        }
    }
    cout<<"Difference B/W even indeces and odd indeces : "<< even - odd<< endl;
    
    
}