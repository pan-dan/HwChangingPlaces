#include <iostream>
using namespace std;

void Exchange(int& a, int& b);

void main()
{
	setlocale(LC_ALL, "");

	int a = 2, 
		b = 3;
	cout << "Введите значение первой переменной a: "; cin >> a;
	cout << "Введите значение второй переменной b: "; cin >> b;

	Exchange(a, b);

	cout << "a = " << a << endl << "b = " << b;
	

}

void Exchange(int& a, int& b)
{
	a += b;
	b += a;
	a -= b;
	a *= -1;
	b -= (2 * a);
	
}


//
//a = 2;
//b = 1;
//
//
//1)a += b;             a = 3
//2) b + = a;            b = 4
//3) a -= b				a = -1
//4) a *= -1				a = 1
//5) b -= (2 * a)			b = 2
//
