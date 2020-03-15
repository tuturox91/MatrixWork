#pragma once


//Создать матрицу, где n - количество строк, m - количество столбцов.
//Вида: int** VarName = CreateMatrix(n,m);
int** CreateMatrix(int n = 1, int m = 1); 

//Вывод матрицы.
void ShowMatrix(int **FArr, int n, int m); 


//Заполнить матрицу случайными числами.
//FArr - матрица, n, m - ее размерность, firstValue - начальное диапазона случайного числа, lastValue - конечное число диапазона случайных чисел.
void RandomIntMatrix(int** FArr, int n, int m, int firstValue, int lastValue); 

//Сложение квадратных матриц
int** AddSquareMatrix(int** FirstMatrix, int** SecondMatrix, int n);

//Разница квадратных матриц
int** SubSquareMatrix(int** FirstMatrix, int** SecondMatrix, int n);


//Сложить матрицы разного размера
//Вы получите матрицу наибольшего размера. Если ваши матрицы размера: 10, 8 и вторая: 3, 7, то результатная матрица будет 10, 8;
int** AddMatrix(int** FirstMatrix, int n, int m, int** SecondMatrix, int k, int z);

//Заполнить матрицу числом, где Value то самое число.
void MatrixWithIntValue(int** FArr, int n, int m, int Value);

//Разница матриц разного размера
//Вы получите матрицу наибольшего размера. Если ваши матрицы размера: 10, 8 и вторая: 3, 7, то результатная матрица будет 10, 8;
int** SubMatrix(int** FirstMatrix, int n, int m, int** SecondMatrix, int k, int z);

//Возвращает большее число
int AmoreB(int a, int b);
//Удалить матрицу и очистить память.
void DeleteMatrix(int** array, int n = 1, int m = 1);
//Умножение матрицы на число;
void MultiplyMatrixOnInt(int** Matrix, int n, int m, int Number);