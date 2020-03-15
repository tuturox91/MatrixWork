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
	//������ ������
	int** matrix = CreateMatrix(k,z); //������� ������ �������
	int** matrix1 = CreateMatrix(n, m); //������� ������ �������

	RandomIntMatrix(matrix, k, z, 0, 100); //��������� ������ ������� ���������� ������� �� 0 �� 100
	RandomIntMatrix(matrix1, n, m, -50, 150); //��������� ������ ������� ���������� ������� �� -50 �� 150

	ShowMatrix(matrix, k, z); //������� �������
	ShowMatrix(matrix1, n, m); //������� ������ �������

	int** result = SubMatrix(matrix, k, z, matrix1, n,m); //�������� �� ������ ������� ������
	ShowMatrix(result, n, m); //������� ���������



	MultiplyMatrixOnInt(matrix, k, z, 18); //������ ��������� ������ ������� �� ����� 18
	ShowMatrix(matrix, k, z); //����� ���� ������� ����� ���������
}