#include <iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = low - 1;

	for (int j = low; j <= high; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pivot = partition(arr, low, high);

		quickSort(arr, low, pivot - 1);
		quickSort(arr, pivot + 1, high);
	}
}

void swap(int& a, int& b)
{
	//cout << "<swapping " << a << " & " << b << ">\n";
	int temp;
	temp = a;
	a = b;
	b = temp;
	//cout << "<Finished>\n";
}
void printArray(int arr[], int size)
{
	cout << "Array: |";
	for (int i = 0; i < size; i++)
		cout << arr[i] << "|";
	cout << endl;
}