/*
 * 158A Next Round.cpp
 *
 *  Created on: May 8, 2018
 *      Author: NSM
 */

#include<iostream>
using namespace std;
int main() {
	int n, k, a[50], ans = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] >= a[k - 1] && a[i] != 0)
			ans++;
	}
	cout << ans;
	return 0;
}

