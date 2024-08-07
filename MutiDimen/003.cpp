// transpose of metrix


#include<iostream>
using namespace std;

int main(){
    int r1,c1;
    cin>>r1>>c1;
    int m1[r1][c1];

    

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin>>m1[i][j];
        }
    }

    int m2[c1][r1];
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            m2[i][j] = m1[j][i];
        }
    }

    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            cout<<m2[i][j]<<" ";
        }
        cout<<endl;
    }
    

    }