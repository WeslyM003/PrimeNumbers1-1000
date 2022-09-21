//Created By aoeuaoeuaoeu on cplusplus.com
//Edited slightly by Wesly Maulsby


#include <iostream>

using namespace std;

bool prime;

int main(int argc, char const* argv[])
{
	for (int i = 1; i <= 1000; i++) {
		bool prime = true;

		for (int j = 2; j < i; j++) {
			if (i % j == 0 || i == j) {
				prime = false;
				break;
			}
		}

		if (prime == true) {
			cout << i << endl;
		}
	}

	return 0;
}
