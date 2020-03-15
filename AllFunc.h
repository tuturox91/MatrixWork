#pragma once


//������� �������, ��� n - ���������� �����, m - ���������� ��������.
//����: int** VarName = CreateMatrix(n,m);
int** CreateMatrix(int n = 1, int m = 1); 

//����� �������.
void ShowMatrix(int **FArr, int n, int m); 


//��������� ������� ���������� �������.
//FArr - �������, n, m - �� �����������, firstValue - ��������� ��������� ���������� �����, lastValue - �������� ����� ��������� ��������� �����.
void RandomIntMatrix(int** FArr, int n, int m, int firstValue, int lastValue); 

//�������� ���������� ������
int** AddSquareMatrix(int** FirstMatrix, int** SecondMatrix, int n);

//������� ���������� ������
int** SubSquareMatrix(int** FirstMatrix, int** SecondMatrix, int n);


//������� ������� ������� �������
//�� �������� ������� ����������� �������. ���� ���� ������� �������: 10, 8 � ������: 3, 7, �� ������������ ������� ����� 10, 8;
int** AddMatrix(int** FirstMatrix, int n, int m, int** SecondMatrix, int k, int z);

//��������� ������� ������, ��� Value �� ����� �����.
void MatrixWithIntValue(int** FArr, int n, int m, int Value);

//������� ������ ������� �������
//�� �������� ������� ����������� �������. ���� ���� ������� �������: 10, 8 � ������: 3, 7, �� ������������ ������� ����� 10, 8;
int** SubMatrix(int** FirstMatrix, int n, int m, int** SecondMatrix, int k, int z);

//���������� ������� �����
int AmoreB(int a, int b);
//������� ������� � �������� ������.
void DeleteMatrix(int** array, int n = 1, int m = 1);
//��������� ������� �� �����;
void MultiplyMatrixOnInt(int** Matrix, int n, int m, int Number);