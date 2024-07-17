#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(6);
    int n;
    int count = 0;

    for (int i = 0; i < 6; i++)
    {  
        cin >> v[i];
    }

    cout << "Enter the number : ";
    cin >> n;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == n)
        {
            count += 1;
        }
    }
    cout << "No of occurance is : " << count << endl;

    return 0;
}