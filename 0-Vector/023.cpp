// Given an integer array 'a' sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    std::vector<int> square;
    vector<int> arranged;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int cd;
        cin>>cd;
        square.push_back(cd*cd);
    }

    std::sort(square.begin(),square.end());

    for ( int num : square)
    {
        std::cout<<num<<" ";
    }

    cout<<endl;

    return 0;      
        
}
    

    