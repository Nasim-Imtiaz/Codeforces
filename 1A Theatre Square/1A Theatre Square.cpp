/*
 * 1A Theatre Square.cpp
 *
 *  Created on: Apr 29, 2018
 *      Author: NSM
 */

#include<iostream>
using namespace std;
int main() {
	long long int m, n, a;
	cin >> m >> n >> a;
	if (m % a != 0 || m < a){
		m /= a;
		m += 1;
	}
	else{
		m /= a;
	}
	if (n % a != 0 || n < a){
		n /= a;
		n += 1;
	}
	else{
		n /= a;
	}
	cout << m * n;
	return 0;
}

