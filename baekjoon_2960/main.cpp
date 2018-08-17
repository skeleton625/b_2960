#include <iostream>
#include <string.h>
using namespace std;

bool n[1001];
int a, b, c, i, j, r;

int main() {
	memset(n, 1, 1001);
	n[0] = false; n[1] = false;
	cin >> a >> b;
	for (i = 2; i <= a; i++) {
		for (j = i; j <= a; j += i) {
			if (n[j]) {
				n[j] = false;
				if (++c == b) {
					cout << j;
					return 0;
				}
			}
		}
	}
}