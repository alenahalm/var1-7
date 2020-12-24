#include <iostream>
#include <string>

using namespace std;

int main()
{
	int counter = 1;
	for (int i = 8; i < 10000000; i++) {
		int k2 = 0;
		int k8 = 0;
		int n = i;
		while (n > 0) {
			if (n % 8 == 1) {
				k8++;
			}
			n /= 8;
		}
		n = i;
		while (n > 0) {
			if (n % 2 == 1) {
				k2++;
				if (k2 > k8) {
					break;
				}
			}
			n /= 2;
		}
		if (k2 == k8) {
			counter++;
		}
	}
	cout << counter << " numbers" << endl;
	system("pause");
}