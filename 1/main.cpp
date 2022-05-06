#include "Complex.h"
int main() {
	setlocale(0, "");
	Complex c1{}, c2{}, rezult{};
	int num = 0;
	cout << "Calculator of complex numbers" << endl;
	cout << "Enter 1 number:" << endl;
	read(c1);
	cout << "Enter 2 number:" << endl;
	read(c2);
	cout << "Select an operation:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Multiplication" << endl;
	cout << "3. Subtraction" << endl;
	cout << "4. Division" << endl;
	if (cin >> num) {
		if (num == 1) {
			rezult = complexAdd(c1, c2);
			print(rezult);
		}
		if (num == 2) {
			rezult = complexMulzply(c1, c2);
			print(rezult);
		}
		if (num == 3) {
			rezult = complexSubtract(c1, c2);
			print(rezult);
		}
		if (num == 4) {
			rezult = complexDivide(c1, c2);
			print(rezult);
		}
	}
	else {
		cout << "Error!!!";
	}
	return 0;
	//2 часть задания
	/*
	setlocale(0, "");
	int i, n;
	cout << "n="; cin >> n;
	ofstream f1("Complex.txt");
	for (i = 0; i < n; i++)
	{
		cout << "Enter complex numbers:";
		string s;
		cin >> s;
		f1 << s;
		f1 << "\n";
	}
	f1.close();
	string str;
	ifstream f2("Complex.txt");
	vector <Complex> p(n);
	for (int i = 0; i < n; i++) {
		f2 >> str;
		p[i] = strTocom(str);
	}
	int maxM = 0;
	Complex maxC{0,0};

	for (int i = 0; i < n; i++) {
		if (complexModule(p[i]) > maxM) {
			maxC = p[i];
			maxM = complexModule(p[i]);
		}
	}
	print(maxC);*/
}