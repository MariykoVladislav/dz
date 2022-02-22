#include<iostream>
using namespace std;

void fillArray(int*& arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void main()
{
	srand(time(0));
	int size = 3;
	int* arr = new int[size];
	fillArray(arr, size);
}