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

    int arrayNew[array.size()];
    int i,j;

    for (i = 0; i < array.size()-rotatation; i++)
    {
        arrayNew[i] = array[array.size()-rotatation + i];
    }

    for (j = array.size()-rotatation; j < array.size(); j++)
    {
        arrayNew[j] = array[i];
        i++;
    }
    
    for (int k = 0; k < array.size(); k++)
    {
        cout<<arrayNew[k];
    }
    cout<<endl;
    
    return 0;
    
    

    
}
