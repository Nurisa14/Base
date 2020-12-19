#include<iostream>
using namespace std;
const int ROWS = 8;
const int COLS = 5;


void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);

void FillRand(int arr[ROWS][COLS], const int m, int n);
void FillRand(double arr[ROWS][COLS], const int m, int n);
void FillRand(char arr[ROWS][COLS], const int m, int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);

void Print(int arr[ROWS][COLS], int m, int n);
void Print(double arr[ROWS][COLS], int m, int n);
void Print(char arr[ROWS][COLS], int m, int n);
void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(int arr[ROWS][COLS], const int m, const int n);

int sum(int arr[], const int n);
double sum(double arr[], const int n);
int sum(int arr[ROWS][COLS], const int m, const int n);
double sum(double arr[ROWS][COLS], const int m, const int n);


double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(int arr[ROWS][COLS], const int m, const int n);
double Avg(double arr[ROWS][COLS], const int m, const int n);


int minValue(int arr[], const int n);
double minValue(double arr[], const int n);
int maxValue(int arr[], const int n);
double maxValue(double arr[], const int n);


int maxValue(int arr[ROWS][COLS], const int m, const int n);
double maxValue(double arr[ROWS][COLS], const int m, const int n);
int minValue(int arr[ROWS][COLS], const int m, const int n);
double minValue(double arr[ROWS][COLS], const int m, const int n);

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


void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void FillRand(int arr[ROWS][COLS], const int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j]=rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand();
		}
	}
}


void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(int arr[ROWS][COLS], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

}
void Print(double arr[ROWS][COLS], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

}
void Print(char arr[ROWS][COLS], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}



void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] + buffer;
			}
		}
	}
}

int sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum +=  arr[i];
	return sum;
}

int sum(int arr[ROWS][COLS], const int m, const int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	return sum;
}
double sum(double arr[ROWS][COLS], const int m, const int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	return (double)sum(arr, n) / n;

}
double Avg(int arr[ROWS][COLS], const int m, const int n)

{
	return (double)sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(double arr[], const int n)
{
	return (double)sum(arr, n) / n;
}
double Avg(double arr[ROWS][COLS], const int m, const int n)
{
	return (double)sum(arr, ROWS, COLS) / (ROWS * COLS);
}

int minValue(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int maxValue(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
double minValue(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;

}
double maxValue(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

int minValue(int arr[ROWS][COLS], const int m, const int n)
{
	int min = arr[0][0];
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (arr[i][j] < min)min = arr[i][j];
			}
		}
		return min;
}
double minValue(double arr[ROWS][COLS], const int m, const int n)
{
	int min = arr[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}

int maxValue(int arr[ROWS][COLS], const int m, const int n)
{
	int max = arr[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] >max)max = arr[i][j];
		}
	}
	return max;
}
double maxValue(double arr[ROWS][COLS], const int m, const int n)
{
	int max = arr[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}
void Sort(int arr[ROWS][COLS], const int m, const int n)

{
	int iterations = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = i; k < m; k++)
{
				/*int l;
				if (k == i)l = j + 1;
				else l = 0;*/ 
				// condition? if_true:if_false;
				
				for (int l=k==i?j+1:0; l < n; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
					iterations++;
				}
			}

		}
	}
	cout << "Количество итераций: " << iterations << endl;
}