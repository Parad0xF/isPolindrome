/** Radu Enachi 09/29/2020*/
/** The promgram is checkin if the string is polindrome C++ using recursion*/

#include <iostream>
#include <string>

using namespace std;

bool isPolindrome(string s);

int main() {
	string s = "radar";

	cout << isPolindrome(s);

	return 0;
}

bool isPolindrome(string s) {
	int len = s.length();

	if (s.length() == 1 || s.empty()) {
		return true;
	}
	else if (s[0] == s[s.length() - 1]) {

		
		return isPolindrome(s.substr((0 + 1), (s.length() - 2)));
	}
	else
		return false;

}