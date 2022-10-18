#include <iostream>

#include "food.h"

using namespace std;

int main() {
	int n = 0;
	cin >> n;

	Foods a[100];
	string s;
	double t;
	for (int i = 0; i < n; i++) {
		cout << "Name Food: " << endl;
		cin >> s;
		a[i].setName(s);
		cout << "Weight:" << endl;
		cin >> t;
		a[i].setWeight(t);
		cout << "Calories:" << endl;
		cin >> t;
		a[i].setCalories(t);
	}

	return 0;
}
