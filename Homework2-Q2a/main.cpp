/*
 * main.cpp
 *
 *  Created on: 30 Jan 2014
 *      Author: rajru_000
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float x;
	float a;
	float b;
	float c;
	float d;
	double i;

	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;

	float y = (a*pow(x,3)) + (b*pow(x,2)) + (c*x) +d;

	for(x=-10; x<=10; i++) {
		cout.setf(ios::scientific,
				ios::floatfield);
		cout.precision(3);
		cout << y << endl;
		float x=x+0.5i;
	}

}
