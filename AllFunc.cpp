#include <iostream>


using namespace std;


int** CreateMatrix(int n = 1, int m = 1) {

	int** array = new int* [n];
	for (int count = 0; count < n; ++count)
		array[count] = new int[m];

	return array;
}

int** AddSquareMatrix(int **FirstMatrix, int** SecondMatrix,int n) {
	int** newmatrix = CreateMatrix(n,n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			newmatrix[i][j] = FirstMatrix[i][j] + SecondMatrix[i][j];
		}
	}
	return newmatrix;
}

void MultiplyMatrixOnInt(int** Matrix, int n, int m, int Number) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			Matrix[i][j] = Matrix[i][j] * Number;
		}
	}
}

int AmoreB(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

void MatrixWithIntValue(int** FArr, int n, int m, int Value) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			FArr[i][j] = Value;
		}
	}
}

void ShowMatrix(int** FArr, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << FArr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void DeleteMatrix(int ** array, int n = 1, int m = 1) {

	for (int count = 0; count < n; ++count)
		delete[] array[count];
	delete[] array;
}

int** AddMatrix(int** FirstMatrix, int n, int m, int** SecondMatrix, int k, int z) {
	int MoreN = AmoreB(n, k);
	int MoreM = AmoreB(m, z);
	int** newmatrix = CreateMatrix(MoreN, MoreM);
	int** addmatrix1 = CreateMatrix(MoreN, MoreM);
	int** addmatrix2 = CreateMatrix(MoreN, MoreM);
	MatrixWithIntValue(newmatrix, MoreN, MoreM, 0);
	MatrixWithIntValue(addmatrix1, MoreN, MoreM, 0);
	MatrixWithIntValue(addmatrix2, MoreN, MoreM, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			addmatrix1[i][j] = FirstMatrix[i][j];
		}
	}
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < z; j++) {
			addmatrix2[i][j] = SecondMatrix[i][j];
		}
	}

	for (int i = 0; i < MoreN; i++) {
		for (int j = 0; j < MoreM; j++) {
			newmatrix[i][j] = addmatrix1[i][j] + addmatrix2[i][j];
		}
	}
	DeleteMatrix(addmatrix1, MoreN, MoreM);
	DeleteMatrix(addmatrix2, MoreN, MoreM);
	return newmatrix;
}


int** SubMatrix(int** FirstMatrix, int n, int m, int** SecondMatrix, int k, int z) {
	int MoreN = AmoreB(n, k);
	int MoreM = AmoreB(m, z);
	int** newmatrix = CreateMatrix(MoreN, MoreM);
	int** addmatrix1 = CreateMatrix(MoreN, MoreM);
	int** addmatrix2 = CreateMatrix(MoreN, MoreM);
	MatrixWithIntValue(newmatrix, MoreN, MoreM, 0);
	MatrixWithIntValue(addmatrix1, MoreN, MoreM, 0);
	MatrixWithIntValue(addmatrix2, MoreN, MoreM, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			addmatrix1[i][j] = FirstMatrix[i][j];
		}
	}
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < z; j++) {
			addmatrix2[i][j] = SecondMatrix[i][j];
		}
	}

	for (int i = 0; i < MoreN; i++) {
		for (int j = 0; j < MoreM; j++) {
			newmatrix[i][j] = addmatrix1[i][j] - addmatrix2[i][j];
		}
	}
	DeleteMatrix(addmatrix1, MoreN, MoreM);
	DeleteMatrix(addmatrix2, MoreN, MoreM);
	return newmatrix;
}


int** SubSquareMatrix(int** FirstMatrix, int** SecondMatrix, int n) {
	int** newmatrix = CreateMatrix(n, n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			newmatrix[i][j] = FirstMatrix[i][j] - SecondMatrix[i][j];
		}
	}
	return newmatrix;

}



void RandomIntMatrix(int** FArr, int n, int m, int firstValue, int lastValue) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			FArr[i][j] = firstValue + rand() % lastValue;
		}
	}
}
