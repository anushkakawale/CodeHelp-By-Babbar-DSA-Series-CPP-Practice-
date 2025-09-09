#include<iostream>
using namespace std;

int main(){
    //declare
    int number[15];
    cout<<"Value at 0th index : "<<number[0]<<endl; //we get garbage values as the values are not initialised
    cout<<"Value at 14th index : "<<number[14]<<endl;

    int n = 15;
    int third[15] = {2,7};
    for(int i=0; i<n; i++){
        cout<<third[i]<<" ";
    }
    cout<<endl;

    return 0;
}