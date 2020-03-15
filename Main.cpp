#include <iostream>
#include <malloc.h>
#include "AllFunc.h"

const int n = 8;
const int m = 10;
const int k = 6;
const int z = 5;


using namespace std;

void main() {
	setlocale(LC_ALL, "rus");
	//пример работы
	int** matrix = CreateMatrix(k,z); //создаем первую матрицу
	int** matrix1 = CreateMatrix(n, m); //создаем вторую матрицу

	RandomIntMatrix(matrix, k, z, 0, 100); //заполняем первую матрицу случайными числами от 0 до 100
	RandomIntMatrix(matrix1, n, m, -50, 150); //заполняем вторую матрицу случайными числами от -50 до 150

	ShowMatrix(matrix, k, z); //выводим матрицу
	ShowMatrix(matrix1, n, m); //выводим вторую матрицу

	int** result = SubMatrix(matrix, k, z, matrix1, n,m); //Отнимаем от первой матрици вторую
	ShowMatrix(result, n, m); //выводим результат



	MultiplyMatrixOnInt(matrix, k, z, 18); //Просто умножение первой матрици на число 18
	ShowMatrix(matrix, k, z); //вывод этой матрици после умножения
}