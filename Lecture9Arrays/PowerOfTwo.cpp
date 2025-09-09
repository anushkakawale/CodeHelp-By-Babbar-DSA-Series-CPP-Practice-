#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number to check if it is power of 2 "<<endl;
    cin>>num;
    int temp = num;
    while(temp%2 == 0){
        temp /= 2;
    }

    if(temp == 1){
        cout<<num<<" is a power of 2"<<endl;
    }
    else{
        cout<<num<<" is not a power of 2"<<endl;
    }
    return 0;
}