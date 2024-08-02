// prefix sums

#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    int sum =0;
    vector<int> v;


    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin>>c;
        v.push_back(c);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum +v[i];
        cout<<sum<<" ";
    }
    cout<<endl;
    
    

    return 0;      
        
}
    

    