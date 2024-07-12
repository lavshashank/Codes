// Given the afe of a person, wirte a function to check if the person is eligible to vote or not?
#include<iostream>
using namespace std;

int vote(int age){
    if(age>=18){
        cout<<"Eligible to vote"<<endl;
    }
    else{
        cout<<"Not Eligible to vote"<<endl;
        }
        return 0;
}
int main(){
    int val;
    cout<<"Enter your age"<<endl;
    cin>>val;
    vote(val);
    return 0;
    }
    
    