#include <iostream>
using namespace std;


int main(){
    int num = 7;
    int series = 0;
    for(int i =  1;i<=num;i++){
        series = (series*2)+1;
        cout<<series<<" ";
    }
}