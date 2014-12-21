//////////////////////////////////////////
//	Proyecto Fin de Grado
//	2014/12/13
//	Luis Fernández González
//////////////////////////////////////////
//matrix library

#ifndef _PFG_MATRIX_H_
#define _PFG_MATRIX_H_

#include <iostream>

template<typename T> class Matrix {
public:
	Matrix(int, int);
	~Matrix();

//Matrix - scalar operations
	bool operator ==(const T identity);
	void operator =(const T identity);

	T** mMatrixElements;
private:
	int _rows;
	int _columns;
};	//Matrix



template<typename T> Matrix<T>::Matrix(int rows, int columns) {
	_rows = rows;
	_columns = columns;

	int* pAllocationError;
	pAllocationError = new(nothrow) int;
	*pAllocationError = 0;

	mMatrixElements = new (nothrow) T* [_rows];
	for (int i = 0; i < _rows; i++){
		*(mMatrixElements + i) = new(nothrow) T [_columns];
		if (*(mMatrixElements) == NULL)
			*pAllocationError += 1;
	}
	
	if (mMatrixElements == 0 || *pAllocationError != 0)
		std::cout << "Allocation error. Couldn't create space for the matrix\n" << std::endl;

	delete pAllocationError;
}	//Constructor



template<typename T> Matrix<T>::~Matrix(){
	delete mMatrixElements;
}	//Destructor



template<typename T> bool Matrix<T>::operator ==(const T comparison) {
	for (int i = 0; i < _rows; i++) {
		for (int j = 0; j < _columns; j++) {
			if (mMatrixElements[i][j] != comparison)
				return mMatrixElements[i][j] == comparison;
		}
	}
	return true;
}	//Operator ==



template<typename T> void Matrix<T>::operator =(const T identity) {
	for (int i = 0; i < _rows; i++) {
		for (int j = 0; j < _columns; j++) {
			mMatrixElements[i][j] = identity;
		}
	}
}	//Operator =
#endif	//_PFG_MATRIX_H_