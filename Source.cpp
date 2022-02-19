#include<iostream>
#include<random>
#include<ctime>
#include<Windows.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long n;
	cin >> n;
	long min=999999999, max=-1, i = 0, j = 0,hieu=0,vtmax=0,vtmin=0;
	int dem=0;
	while (n--) {
		long x;
		cin >> x;
		if (x < min) {
			min = x;
			vtmin = j;
		}
		if (dem>0 && x > max) {
			max = x;
			vtmax = j;
		}
		if (vtmin<vtmax && (max-min)>hieu) {
			hieu = max - min;
			max = -1;
		}
		++dem;
		++j;
	}
		cout << hieu;
	return 0;
}