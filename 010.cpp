// Problem on vector (1)

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(6);
     int n;
    for (int i = 0; i < 6; i++)
    {
        cin>>v[i];
    }
   
    cout<<"Enter the number for the last occurance of that number: ";
    cin>>n;
    int pos = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]==n && pos < i){
                pos = i;
        }        
    }
    cout<< "element is:"<< n<<"Position is: "<<pos<<endl;
    
    
}