/*************************************************
* Program: 
* ================================================
* Programmer: Cameron Abo
* Class: CS 1C M/W 10:30a
*************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
void swap(int& a, int& b);
void printArray(int arr[], int size);

int main()
{
	time_t start, end;
	double execTime;
	int arr[] = { 125,65,98,4564,8465,51654,
				  548465,56451,857945,55,2187,489632,
				  32658,215414,22,896326,4874,3210,23150,
				  68974,366598,4123321,21489,32215,698741};

	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Original Array:\n";
	printArray(arr, n);

	// Function call
	cout << "Starting timer\n";
	time(&start);
	quickSort(arr, 0, n - 1);
	time(&end);
	execTime = double(end - start) / double(CLOCKS_PER_SEC);

	//Print the sorted array
	cout << fixed << setprecision(5);
	cout << "\nSorted array is \n";
	printArray(arr, n);
	cout << "\nSorting took " << execTime << " secs to execute\n";

	system("pause");

	return 0;
}