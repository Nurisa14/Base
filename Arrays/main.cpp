#include"Functions.h"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << sum(arr, n) << endl;
	cout << "����� ��������������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValue(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValue(arr, n) << endl;
	cout << "��������������� ������:\n";
	Sort(arr, n);
	Print(arr, n);
	cout << "\n===========================================\n";

	
	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	cout << "����� ��������� �������: " << sum(brr, n) << endl;
	cout << "����� ��������������: " << Avg(brr, n) << endl;
	cout << "����������� �������� � �������: " << minValue(brr, n) << endl;
	cout << "������������ �������� � �������: " << maxValue(brr, n) << endl;
	cout << "��������������� ������:\n";
	Sort(brr, n);
	Print(brr, n);
	cout << "\n-------------------------------------------------\n";

	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2,ROWS,COLS);
	cout << "����� ��������� �������: " << sum(arr2, ROWS, COLS) << endl;
	cout << "����� ��������������: " << Avg(arr2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValue(arr2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValue(arr2, ROWS, COLS) << endl;
	cout << "���������������� ������: \n";
	Sort(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "\n---------------------------------------------------\n";
	
	double brr2[ROWS][COLS];
	FillRand(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);
	cout << "����� ��������� �������: " << sum(brr2,ROWS, COLS) << endl;
	cout << "����� ��������������: " << Avg(brr2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValue(brr2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValue(brr2, ROWS, COLS) << endl;
	
	cout << "\n-------------------------------------------------------------------\n";
	
	
	char chr[n];
	FillRand(chr, n);
	Print(chr, n);
	
	cout << "\n--------------------------------------------------------------------\n";
	
	char chr2[ROWS][COLS];
	FillRand(chr2, ROWS, COLS);
	Print(chr2, ROWS, COLS);


}


