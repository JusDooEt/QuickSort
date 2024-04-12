# QuickSort
## Output
```
Original Array:
Array: |125|65|98|4564|8465|51654|548465|56451|857945|55|2187|489632|32658|215414|22|896326|4874|3210|23150|68974|366598|4123321|21489|32215|698741|
Starting timer

Sorted array is
Array: |22|55|65|98|125|2187|3210|4564|4874|8465|21489|23150|32215|32658|51654|56451|68974|215414|366598|489632|548465|698741|857945|896326|4123321|

Sorting took 0.00000 secs to execute
Press any key to continue . . .
```
## About
This algorithm has a time complexity of O(n log n) and is similar to the merge sort. The difference is that quick sort focuses on dividing the unsorted array by a pivot index, in this case the last element in the array. This sorting algorithm is considered more efficient than the merge sort because it does not require new dynamic arrays to be created to sort the original array. This algorithm uses a partition function in order to "split" the array into smaller sub partitions of the array. The algorithm will loop through the given sub section of the array and choose the last element of the subsection as the pivot. The partition function will then loop through the array swapping elements that are less than the pivot to the "front" of the array. The pivot will then be swapped to the appropriate index in the section given to the partition function. The algorithm then recursively calls itself using the new pivot index to create new subsections to pass to the partition function.

![image](https://github.com/JusDooEt/QuickSort/assets/152052216/499644ab-180c-49d3-9579-9ab62e760a60)
![image](https://github.com/JusDooEt/QuickSort/assets/152052216/bf0764cb-6437-4926-8782-f8f82ff0ed57)
![image](https://github.com/JusDooEt/QuickSort/assets/152052216/2065fb83-7108-4661-bb52-af0566be07c5)
![image](https://github.com/JusDooEt/QuickSort/assets/152052216/3308aaf5-ecb1-43f1-bf81-48a487a8d28f)
![image](https://github.com/JusDooEt/QuickSort/assets/152052216/5fe26b1b-923f-46fc-85a1-44bf31c468e5)
![image](https://github.com/JusDooEt/QuickSort/assets/152052216/36cc4247-ea54-471b-831c-68f1b7eb6145)
![image](https://github.com/JusDooEt/QuickSort/assets/152052216/32a7bd23-7a61-4893-a90b-ec3f615beada)

## Usage
- This algorithm is the typical go to sorting algorithm because of its competitive time complexity if O(n log n) and no need to dynamically allocated memory.
- Add the .cpp file to a project and include the function prototypes in the project main or header file.

## Functions
- void partition(int arr[], int low, int high)
  - This function receives an array and two indexes representing the front and back of the subsection to be sorted.
  - The function initializes a pivot equal to high, and two indexes, i and j, i = low - 1 and j = low;
  - The array is looped through using j to check if an element is less than the pivot.
    - If the element is less than the pivot, i is incremented and elements at index i and j are swapped.
  - At the end of the loop the pivot is swapped with the element at index i + 1 and the function returns the pivot's new index.
- void quickSort(int arr[], int low, int high)
  - The functions base case is that low must be less than high
  - This function receives an array and two indexes representing the front and back of the subsection to be sorted.
  - This function receives the index of the sorted pivot from the partition function call.
  - The function calls itself recursively creating new subsections to be sorted based on the pivot index.
Credit: [https://www.geeksforgeeks.org/quick-sort/](https://www.geeksforgeeks.org/quick-sort/)

