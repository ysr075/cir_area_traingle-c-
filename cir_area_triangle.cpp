#include <iostream>
using namespace std;

int main() {
	do {
		string choose;
		cout << "\n1.circumference or 2.area: "; cin >> choose;
		if (choose == "1") {
			int line1; int line2; int line3;;
			cout << "\nline1: "; cin >> line1;
			cout << "line2: "; cin >> line2;
			cout << "line3: "; cin >> line3;
			cout << "\ntotal circumference is " << line1 + line2 + line3 << "\n";
		} else if (choose == "2") {
			int base; int height;
			cout << "\nbase: "; cin >> base;
			cout << "height: "; cin >> height;
			cout << "\ntotal area is " << ((base * height) / 2) << "\n";
		} else {
			exit(0);
		}
	} while (true);
}
