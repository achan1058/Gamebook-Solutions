#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int total = 0;
	for (char c : s) {
		if (isalpha(c))
			total += tolower(c) - 'a' + 1;
	}
	cout << total << endl;
}