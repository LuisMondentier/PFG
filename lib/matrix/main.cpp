//////////////////////////////////////////
//	Proyecto Fin de Grado
//	2014/12/13
//	Luis Fernández González
//////////////////////////////////////////
//matrix tests

#include <iostream>
#include <string>
#include "matrix.h"

using namespace std;

int main(void) {
	Matrix <int> A(2,2);
	Matrix <int> B(2,2);
	A = 3;
	B = A;
	cout << B.mMatrixElements[1][1] << endl;
	
	system("pause");
	return 0;
}	//main