#ifndef VECT4_H
#define VECT4_H

#include <iostream>

using namespace std;

template <class T> class vect4 {
	public:
		T x, y, z, w;

		// Constructor
		vect4( T nx, T ny, T nz, T nw ){
			x = nx;
			y = ny;
			z = nz;
			w = nw;
		}

		// + Operator
		vect4 operator+(const vect4& v1){
			T nx = this->x + v1.x;
			T ny = this->y + v1.y;
			T nz = this->z + v1.z;
			T nw = this->w + v1.w;
			return new vect4<T>( nx, ny, nz, nw );
		}

		// - Operator
		vect4 operator-(const vect4& v1){
			T nx = this->x - v1.x;
			T ny = this->y - v1.y;
			T nz = this->z - v1.z;
			T nw = this->w - v1.w;
			return new vect4<T>( nx, ny, nz, nw );
		}

		// * Operator
		T operator*(const vect4& v1){
			T nx = this->x * v1.x;
			T ny = this->y * v1.y;
			T nz = this->z * v1.z;
			T nw = this->w * v1.w;
			return nx + ny + nz + nw;
		}
};

ostream& operator<<( ostream& os, vect4<float>& v1 ){
	os << v1.x << " " << v1.y << " " << v1.z << " " << v1.w << endl;
	return os;
}

ostream& operator<<( ostream& os, vect4<double>& v1 ){
	os << v1.x << " " << v1.y << " " << v1.z << " " << v1.w << endl;
	return os;
}

ostream& operator<<( ostream& os, vect4<int>& v1 ){
	os << v1.x << " " << v1.y << " " << v1.z << " " << v1.w << endl;
	return os;
}

#endif