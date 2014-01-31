/*
 * main.cpp
 *
 *  Created on: 31 Jan 2014
 *      Author: rajru_000
 */

#include <iostream>
#include <cmath>

using namespace std;

int factorial(int n);

int factorial(int n) {
	double f = 1;
	while (n>0) {
	f = f * n;
	n--;
	}
return f;
}

double poisson (int n, double lambda) {
	double x= (pow(lambda,n)*pow(M_E,-1*lambda))/(factorial(n));
	return x;

}

int main() {

	int n;

	float m;
	cout<< "enter n" <<endl;
	cin >> n;
	cout<< "enter m" <<endl;
	cin >> m;

cout.setf(std::ios::scientific,
				ios::floatfield);
				cout.precision(3);
				cout << "n" << "      "<< "P"<<endl;
	for (int i =0; i<=2*n; i++) {

		cout << i << "  ";

    cout <<poisson(i,m)<< endl;

	}


	return 0;
}
