#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <array>
#include <utility>

using namespace std;


int main() {
	// DEFINITION
	int hit;
	string thisvariableistemporarilyusedtobeassignedtoaconstantvariablenamedN;
	string gotStr = "";
	string checkingStr = "";
	string a;

	string b;
	getline(cin, thisvariableistemporarilyusedtobeassignedtoaconstantvariablenamedN);
	getline(cin, a);
	getline(cin, b);
	string const yourwelcomevariableaforassistingyouwithyouroriginalvalue = a;
	a.erase(remove_if(a.begin(), a.end(), isspace), a.end());
	b.erase(remove_if(b.begin(), b.end(), isspace), b.end());
	int const N = stoi(thisvariableistemporarilyusedtobeassignedtoaconstantvariablenamedN);
	for (int i = 0; i < N + 1; i++) {
		
		for (int j = i; j < N; j++) {
			a = yourwelcomevariableaforassistingyouwithyouroriginalvalue;
			// SUBSTRING DEFINITION
			// 1 3 2
			// 3 2 1
		//	cout << i << ", " << j << ": " << gotStr << endl;
			reverse(a.begin()+i, a.begin()+((j-1)+1));
			// CHECKING SUBSTRING
			for (int z = 0; z < gotStr.size(); z++) {
				
			}
		}
	}
}

