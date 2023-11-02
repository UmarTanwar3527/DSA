#include <bits/stdc++.h>
using namespace std;

int countDigit(int n){
	int count = 0;
	while(n > 0){
		n = n / 10;
		count++;
	}
	return count;
}
bool checkArmstrong(int n){
	int originalnumber = n;
	int numberDigits = countDigit(n);
	int sum = 0;

	while(n > 0){
		int digit = n % 10;
		sum = sum + pow(digit,numberDigits);
		n = n / 10;
	}
	return sum == originalnumber;
}

int main (){
    int number ;
    cout<<"enter a number to armstrong ";
    cin>>number;

    if(checkArmstrong(number)){
        cout<<"Number is Armstrong";
    }
    else{
        cout<<"Number is not Armstrong";
    }

    return 0;
}