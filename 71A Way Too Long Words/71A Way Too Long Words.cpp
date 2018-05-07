/*
 * 71A Way Too Long Words.cpp
 *
 *  Created on: May 7, 2018
 *      Author: NSM
 */

#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;
	string temp;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp.size() < 11)
			cout << temp << endl;
		else {
			cout << temp[0] << temp.size() - 2 << temp[temp.size() - 1] << endl;
		}
	}
	return 0;
}

