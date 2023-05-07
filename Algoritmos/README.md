## Sorting Algorithms
For running this script you should run:
```cpp
make
```
For running multiple times, you can call the binary file inside bin/ folder, or run **make clean** and **make** as many times as you want
```cpp
make clean
```
### Bubble Sort Algorithm
The main component of the bubble sort algoritm is the following:
```cpp
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
```
When implementing the bubble algorithm whe use a nested loop
First loop ranges from 0->n-1
Second loop ranges from 0->n-i-1
Given this two ranges we can get BigO multiplying the ranges 
BigO = (n-1)*(n-i-1) -> O(n<sup>2</sup>)

### Selection Sort Algorithm
```cpp
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
```
Selection sorting algorithm also uses a nested loop
First Loop ranges from 0->n-1
Second loop ranges from i+1->n
Doing the same process me ca multiply the ranges and get BigO
BigO = (n-1)*(n-i-1) -> O(n<sup>2</sup>)

### Insertion Sort Algorithm
```cpp
    for (int i = 1; i < n; i++)
        while (index_to_compare >= 0 && arr[index_to_compare] > present_value)
```
First Loop ranges from 1->n
Second loop ranges from n->0
BigO = O(n<sup>2</sup>) is important to notice this is the worst case analysis

### Quick Sort Algorithm
Quick Sort averages a complexity time of O(n*log(n)) this is because recursion is used
And it has properties similar to a binary tree witn a depth of log(n) and there are n calls
at each level hence BigO = O(n*log(n)). However there are special cases where this 
algorithm performs worse than avarage and this happens when the pivot is the smallest or 
largest element in the list or the Lomuto partition scheme when all the elements are equal [(1)](https://en.wikipedia.org/wiki/Quicksort).
Finally, given that BigO analyses worst case scenario we have the following complexity time O(n<sup>2</sup>)


For more details on other algorithms and its space and time complexity you can check this [website](https://www.bigocheatsheet.com/)