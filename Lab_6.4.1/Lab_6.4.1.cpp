#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void create(int *arr,int size) 
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = 200. * rand() / RAND_MAX-100 ;
	}
}

void show(int *arr,int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << setw(4) << arr[i];
	}
	cout << endl;
}

int search(int *arr,int size)
{
	int max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (max<arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}

int sum(int *arr,int size)
{
	int index;
	int S = 0;
	for (int i = size-1; i >= 0; i--)
	{
		if (arr[i]>0)
		{
			index = i;
			break;
		}
	}
	for (int i = 0; i <= index; i++)
	{
		S += arr[i];
	}
	return S;
}

void change(int* arr,int size,int a,int b)
{
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		if (abs(arr[i])<=a || abs(arr[i])>=b)
		{
			int tmp = arr[j];
			arr[j] = arr[i];
			j++;
		}
	}
	for (int i = j; i < size; i++)
	{
		arr[i] = 0;
	}
}

int main() 
{
	srand((unsigned)time(NULL));

	int size, a, b;
	cout << "size = "; cin >> size;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	int* arr = new int[size];

	create(arr, size);
	show(arr, size);
	int max = search(arr, size);
	int S = sum(arr, size);
	cout << "max = " << max << endl;
	cout << "S = " << S << endl;
	change(arr, size, a, b);
	show(arr, size);
	
	delete[] arr;
	return 0;
}
