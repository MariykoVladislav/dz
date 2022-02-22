#include<iostream>
using namespace std;

void fillArray(int*& arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void sortArray(int*& arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				swap(arr[i], arr[j]);
			}
		}
	}
}
void printArray(int*& arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i]<<" ";
	}
}

void main()
{
	srand(time(0));
	int size = 3;
	int* arr = new int[size];
	fillArray(arr, size);
	sortArray(arr, size);
	printArray(arr, size);
}