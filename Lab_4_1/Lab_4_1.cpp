// Lab_4_1.cpp
// Козубенко Андрій
// Лабораторна робота № 4.1
// Цикли.
// Варіант 10
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int N, i;
	double P;

	cout << "N = "; cin >> N;

	// while(…) { … }
	P = 1.;
	i = N;
	while (i <= 16)
	{
		P *= 1. * i * N / (1. * i * i + 1. * N * N);
		i++;
	}
	cout << "1) P = " << P << endl;

	// do{ … } while(…)
	P = 1.;
	i = N;
	do 
	{
		P *= 1. * i * N / (1. * i * i + 1. * N * N);
		i++;
	} while (i <= 16);
	cout << "2) P = " << P << endl;

	// for(…; …; n++) {… }
	P = 1.;
	for (i = N; i <= 16; i++)
	{
		P *= 1. * i * N / (1. * i * i + 1. * N * N);
	}
	cout << "3) P = " << P << endl;

	// for(…; …; n--) {… }
	P = 1.;
	for (i = 16; i >= N; i--)
	{
		P *= 1. * i * N / (1. * i * i + 1. * N * N);
	}
	cout << "4) P = " << P << endl;

	return 0;
}