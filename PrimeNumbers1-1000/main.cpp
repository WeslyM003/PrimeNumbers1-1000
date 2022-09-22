//Created By aoeuaoeuaoeu on cplusplus.com
//Edited slightly by Wesly Maulsby


#include <iostream>
#include <string>


using namespace std;

bool prime;

int minRange;
int maxRange;

int main(int argc, char const* argv[])
{
	cout << "Enter minimum number in range: ";
	cin >> minRange;

	cout << "Enter maximum number in range: ";
	cin >> maxRange;

	cout << "All of the prime numbers in the range: " << minRange << " to " << maxRange << " are:" << endl;

	for (int i = minRange; i <= maxRange; i++) {
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
