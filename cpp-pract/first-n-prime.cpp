#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i = 2; i < n ; i++){
        if(n % i == 0)
            return 0;
    }
    return 1;
}
int main(){
    int count = 0;
    int n = 2;
    while(count<20){
        if(isPrime(n)){
            cout<< n << " ";
            count++;
        }
        n++;
    }
    return 0;
}