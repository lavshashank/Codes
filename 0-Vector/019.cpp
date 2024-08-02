// Rotate the given array "a" by k steps, where k is non-negative. NOte: k can be greater than n as well where n is the size of array "a"
#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> array(6);
    int rotatation;
    
    for (int i = 0; i < array.size(); i++)
    {
        cin>>array[i];
    }

    // rotation of array

    cout<<"Enter the number of rotation : ";
    cin>>rotatation;

    rotatation = rotatation%array.size();

    int arrayNew[array.size()];
    int j=0;

// inserting last k elemnts in ans array
    for (int i = array.size()-rotatation; i < array.size(); i++)
    {
        arrayNew[j++] = array[i];
    }

// inserting first n-k elemnts in ans array
    for (int i = 0; i < array.size()-rotatation; i++)
    {
        arrayNew[j++]=array[i];
    }
    
    
    for (int k = 0; k < array.size(); k++)
    {
        cout<<arrayNew[k];
    }
    cout<<endl;
    
    return 0;
   
}
