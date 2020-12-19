#include"Functions.h"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << sum(arr, n) << endl;
	cout << "Сумма арфиметическое: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValue(arr, n) << endl;
	cout << "Максимальнон значение в массиве: " << maxValue(arr, n) << endl;
	cout << "Отсортированный массив:\n";
	Sort(arr, n);
	Print(arr, n);
	cout << "\n===========================================\n";

	
	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	cout << "Сумма элементов массива: " << sum(brr, n) << endl;
	cout << "Сумма арфиметическое: " << Avg(brr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValue(brr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValue(brr, n) << endl;
	cout << "Отсортированный массив:\n";
	Sort(brr, n);
	Print(brr, n);
	cout << "\n-------------------------------------------------\n";

	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2,ROWS,COLS);
	cout << "Сумма элементов массива: " << sum(arr2, ROWS, COLS) << endl;
	cout << "Сумма арфиметическое: " << Avg(arr2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValue(arr2, ROWS, COLS) << endl;
	cout << "Максимальнон значение в массиве: " << maxValue(arr2, ROWS, COLS) << endl;
	cout << "Ортсортированный массив: \n";
	Sort(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "\n---------------------------------------------------\n";
	
	double brr2[ROWS][COLS];
	FillRand(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);
	cout << "Сумма элементов массива: " << sum(brr2,ROWS, COLS) << endl;
	cout << "Сумма арфиметическое: " << Avg(brr2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValue(brr2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValue(brr2, ROWS, COLS) << endl;
	
	cout << "\n-------------------------------------------------------------------\n";
	
	
	char chr[n];
	FillRand(chr, n);
	Print(chr, n);
	
	cout << "\n--------------------------------------------------------------------\n";
	
	char chr2[ROWS][COLS];
	FillRand(chr2, ROWS, COLS);
	Print(chr2, ROWS, COLS);


}


