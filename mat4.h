#ifndef MAT4_H
#define MAT4_H

#include <iostream>

using namespace std;

template <class T> class mat4 {
	public:
		// vals[row][col]
		T vals[4][4];

		// Constructor
		mat4(  ){
			for( int i=0 ; i<4 ; i++ )
				for( int j=0 ; j<4 ; j++ )
					vals[i][j] = 0;
			vals[3][3] = 1;
		}

		// // Copy assignment
		// mat4 operator=(const mat4& m1){
		// 	if( this != &other ){

		// 	}
		// 	return *this;
		// }

		// + Operator
		mat4 operator+(const mat4<T>& m1){
			mat4 n_mat = new mat4<T>();

			for( int i=0 ; i<4 ; i++ )
				for( int j=0 ; j<4 ; j++ )
					n_mat->vals[i][j] = this->vals[i][j] + m1->vals[i][j];

			return n_mat;
		}

		// - Operator
		mat4 operator-(const mat4<T>& m1){
			mat4 n_mat = new mat4<T>();

			for( int i=0 ; i<4 ; i++ )
				for( int j=0 ; j<4 ; j++ )
					n_mat->vals[i][j] = this->vals[i][j] - m1->vals[i][j];

			return n_mat;
		}

		// * Operator
		mat4 operator*(const mat4<T>& m1){
			mat4 n_mat = new mat4<T>();

			for( int i=0 ; i<4 ; i++ ) // rows
				for( int j=0 ; j<4 ; j++ ){ // cols
					T n_val = 0;
					for( int k=0 ; k<4 ; k++ )
						n_val += this->vals[i][k] * m1->vals[k][j];
					n_mat->vals[i][j] = n_val;
				}

			return n_mat;
		}

		// * Operator
		mat4 operator*(const float a){
			mat4 n_mat = new mat4<T>();

			for( int i=0 ; i<4 ; i++ )
				for( int j=0 ; j<4 ; j++ )
					n_mat->vals[i][j] = this->vals[i][j] * a;

			return n_mat;
		}

		// * Operator
		mat4 operator*(const double a){
			mat4 n_mat = new mat4<T>();

			for( int i=0 ; i<4 ; i++ )
				for( int j=0 ; j<4 ; j++ )
					n_mat->vals[i][j] = this->vals[i][j] * a;

			return n_mat;
		}

};

ostream& operator<<( ostream& os, mat4<float>& m1 ){
	for( int i=0 ; i<4 ; i++ ){
		for( int j=0 ; j<4 ; j++ ){
			os << m1.vals[i][j] << " ";
		}
		os << endl;
	}

	return os;
}

ostream& operator<<( ostream& os, mat4<double>& m1 ){
	for( int i=0 ; i<4 ; i++ ){
		for( int j=0 ; j<4 ; j++ ){
			os << m1.vals[i][j] << " ";
		}
		os << endl;
	}

	return os;
}

ostream& operator<<( ostream& os, mat4<int>& m1 ){
	for( int i=0 ; i<4 ; i++ ){
		for( int j=0 ; j<4 ; j++ ){
			os << m1.vals[i][j] << " ";
		}
		os << endl;
	}

	return os;
}

#endif