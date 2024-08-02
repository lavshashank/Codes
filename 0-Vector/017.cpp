//Find the unique number in the array -------------------------------------- 

#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr(6);

    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }  
    }
    cout<<"The unqiue number is : ";
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]!=-1){
            cout<<arr[i]<<" , ";
        }
    }
    cout<<endl;
    
    
    
    return 0;
}