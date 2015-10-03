#include "vect4.h"
#include "mat4.h"
#include <iostream>

using namespace std;

int main() {
	cout << "Testing mat4..." << endl;

	mat4<float> m1;

	cout << m1 << endl;
	cout << m1*2.0f << endl;


	cout << "Testing vect4..." << endl;

	// vect4<float> v1( 1, 2, 3, 4 );
	// vect4<float> v2( 1, 1, 1, 1 );

	// cout << v1 << endl;
	// vect4<float> v3 = v1 + v2;
	// // cout << (v1 + v2) << endl;
	// // cout << (v1 * v2) << endl;

	return 0;
}