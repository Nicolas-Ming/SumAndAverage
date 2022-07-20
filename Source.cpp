#include <iostream>
#include <string>

using namespace std;

void sum();
void average();
void getNums();
double a = 0;
double b = 0;
double c = 0;


void main() {
	getNums();
	sum();
	average();

}
void getNums() {
	cout << "Hello dear customer please enter your first number, then hit enter: ";
	cin >> a;
	cout << endl << "Now submit the second, then hit enter: ";
	cin >> b;
	cout << endl << "Now for the third, then hit enter: ";
	cin >> c;
	cout << endl << endl;
}

void sum() {
	cout << a << " + " << b << " + " << c << " = " << a + b + c << endl;
}

void average() {
	cout << "The average of " << a << ", " << b << ", and " << c << " is " << (float)(a + b + c) / 3.0 << endl;
}