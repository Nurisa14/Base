#pragma once
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

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