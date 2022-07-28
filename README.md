# Mystery Sorter - CS 2341 Project 3

This repository was created and maintained by Cullen Watson.

Email: cgwatson@smu.edu

## About

The goal of this program was to relate five mystery functions to five sorting
algorithms. However, I had no access to the implementation of the functions, so the
only tool to figure out the sorting algorithms of each function was through
execution time. 

The five possible sorting algorithms that the functions undertook were:
* optimized bubble sort
* insertion sort
* merge sort
* quicksort (with last element as pivot)
* election sort

## Analysis

### Grouping the Functions

The first step to decoding the functions was to split the functions into two major
categories. Bubble, selection, and insertion sort all had an average time complexity of O(n²), while merge and quick sort had an average time complexity of O(n log(n)). 

To get the average time complexity of each function, I passed an array of randomized integers of size 100,000 and
1,000,000. 

Because the size increase is a factor of 10, you would expect a function with average
time complexity of O(n²) to have an execution time that increased by a factor of 100. 

The results showed that Mystery 1 and 4 did not increase by a factor of 100 but something closer to that of
O(n log(n)), while Mystery 2, 3, 5 did increase by a factor of around 100. Therefore, I concluded
that Mystery 1 and 4 were the O(n log(n)) functions (quick and merge sort), while Mystery 2, 3,
5 were the O(n2) functions (bubble, insertion, and selection sort).

<p align="center">
  <img src="https://user-images.githubusercontent.com/78247585/181483489-2b736a8d-8e0e-448f-b899-75d570a63753.png">
</p>

### Determining the O(n²) Category

After I had grouped the functions into two categories, I began with the O(n²) category. I
knew the best case for insertion and bubble was O(n), leaving selection sort as an outlier. To test
this, I created a sorted integer array. I then compared the execution times for arrays of size
100,000 and 1,000,000. I noticed that only Mystery 5 was O(n²), while the other two mysteries
had a time complexity of O(n). Therefore, I was able to conclude that Mystery 5 was selection
sort.

<p align="center">
  <img src="https://user-images.githubusercontent.com/78247585/181483579-badb62e9-fbe6-4ee2-ac39-914b636e5dee.png">
</p>

To distinguish between bubble and insertion sort for the last two functions in this
category, I knew that insertion sort was a much more efficient algorithm than bubble sort, so I
compared the actual execution times for a randomized integer array of size 1,000,000 and found
Mystery 3 to be much faster. Therefore, I was able to conclude that Mystery 3 is insertion sort
and Mystery 2 is bubble sort.

<p align="center">
  <img src="https://user-images.githubusercontent.com/78247585/181483626-fe004073-74e1-4a4f-bfae-95a14b132836.png">
</p>

### Determining the O(n log(n)) Category

For the O(n log(n)) category of the last two mysteries, I looked at the worst case scenario
for quick sort. Because quick sort’s pivot was the last element, I chose an ascending array. By
having an ascending array, the pivot was also the largest element in the array, which creates the
worst case scenario for quick sort. 

Running sorted arrays of size 10,000 and 100,000. I noticed the time complexity of Mystery 4 grew by a factor of 100, or in other words, a time complexity
of O(n²). Therefore, I could now conclude that Mystery 4 is quick sort due to its worst case being
O(n²), while Mystery 1 is merge sort because the time complexity remained O(n log(n)) for all
test cases.

<p align="center">
  <img src="https://user-images.githubusercontent.com/78247585/181486190-968f9597-d424-4f73-8a29-fd5d572d236c.png">
</p>

# How to Run (must use WSL toolchain)

* Use the CMakeLists.txt to run `cmake` and `make`
* Execute `./sorting_mystery`

The program will display the execution runtimes of different sized datasets being passed to the sorting algorithms. The datasets were either sorted, random, or reverse sorted to induce worst or best case performance in the sorting algos.




