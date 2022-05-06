#include "Complex.h"


void read(Complex& c)
{
	cout << "Enter the real part   ";
	cin >> c.real;
	cout << "Enter the imaginary part   ";
	cin >> c.imag;
}

void print(Complex& c)
{
	cout << c.real << "+(" << c.imag << ")i";
}



Complex complexCreate(int real, int imag)
{
	Complex result = { real, imag };
	return result;
}

Complex complexAdd(Complex c1, Complex c2)
{
	return complexCreate(c1.real + c2.real, c1.imag + c2.imag);
}

Complex complexMulzply(Complex c1, Complex c2) {
	double a = c1.real;
	double b = c1.imag;
	double c = c2.real;
	double d = c2.imag;
	return complexCreate(a * c - b * d, b * c + a * d);
}

Complex complexSubtract(Complex c1, Complex c2)
{
	return complexCreate(c1.real - c2.real, c1.imag - c2.imag);
}

Complex complexDivide(Complex c1, Complex c2)
{
	Complex c; double r;
	r = c1.real * c1.real + c2.imag * c2.imag;
	c.real = (c1.real * c2.real + c1.imag * c2.imag) / r;
	c.imag = (c1.imag * c2.real - c1.real * c2.imag) / r;
	return c;
}

double complexModule(Complex a) {
	return (sqrt(a.imag * a.imag + a.real * a.real));
}

Complex strTocom(string str) {
	string im, re;
	int i = 0, r = 0;
	for (int k = 0; k < str.length(); k++) {
		if ((str[k] == '+') && str.find('-') == -1) {
			im.append(str, k + 1, str.length() - str.find('+') - 2);
			i = stod(im);
			re.append(str, 0, str.find('+'));
			r = stod(re);
			break;
		}
		if ((str[k] == '+') && str.find('-') != -1) {
			im.append(str, k + 1, str.length() - str.find('+') - 2);
			i = stod(im);
			re.append(str, 0, str.find('-'));
			r = -1 * stod(re);
			break;
		}
		if ((str[k] == '-') && str.rfind('+') != -1 && k == 0) {
			re.append(str, k + 1, str.find('+') - 1);
			r = -1 * stod(re);
			im.append(str, str.find('+') + 1, str.length());
			i = stod(im);
			break;
		}
		if ((str[k] == '-') && str.rfind('+') == -1 && k != 0) {
			re.append(str, 1, str.find('-') - 1);
			r = -1 * stod(re);
			im.append(str, str.rfind('-') + 1, str.length());
			i = -1 * stod(im);
			break;
		}
	}
	return complexCreate(r, i);
}


