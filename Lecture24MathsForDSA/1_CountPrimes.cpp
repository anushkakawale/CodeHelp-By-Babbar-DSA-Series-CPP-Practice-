#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countPrimes(int n){
    int cnt = 0;
    vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false;
    for(int i=2; i<n; i++){
        if(prime[i]){
            cnt++;
            for(int j=i*2; j<n; j=j+i){
                prime[j] = false;
            }
        }
    }
    return cnt;
}

int main(){
    int n;
    cout<<"Enter a value to count Prime numbers : "<<endl;
    cin>>n;

    int countis = countPrimes(n);
    cout<<"Prime numbers till "<<n<<" is "<<countis<<endl;

    return 0;
}