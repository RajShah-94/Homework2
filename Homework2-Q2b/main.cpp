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
	float x = -10;
	float a;
	float b;
	float c;
	float d;
	float y;

	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;

	cout.setf(ios::scientific,
					ios::floatfield);
			cout.precision(3);

	for(int i=0; i<40; i++) {
		y = (a*pow(x,3)) + (b*pow(x,2)) + (c*x) +d;

		cout << y << endl;
		x=x+0.5;

	}
}
