#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

	// Задание 3

	string str;

	int n = 3;
	int a = 1, b = 4, c = 11;

	int maxS = max(a, b);
	int maxA = max(maxS, c);

	for (int i = 2; i < maxA; i++) {
		bool flag = true;
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				flag = false;
				break;
			}
		}
		if (flag) {
			str += to_string(i);
		}
	}


	cout << str[a] << endl;
	cout << str[b] << endl;
	cout << str[c] << endl;

	cout << str << endl;

	cout << str;

	// Задание 3

	return 0;
}
