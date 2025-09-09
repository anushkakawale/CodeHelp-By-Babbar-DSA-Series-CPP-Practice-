#include<iostream>
using namespace std;

void printArray(char arr[], int n){
    cout<<"Printing an array : \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    char ch[5] = {'a','b','c','r','p'};
    cout<<ch[2]<<endl;
    printArray(ch, 5);
    char ch1[10] = {'a','b','c','d','e'};
    printArray(ch1, 10);
    cout<<"Number of Elements in an Array : ";
    cout<<sizeof(ch)/sizeof(ch[0])<<endl;
    cout<<"\n";
    return 0;
}