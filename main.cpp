#include <iostream>
#include <chrono>
#include "include/sorting_library.h"

using namespace std;
using namespace chrono;
double getTime(time_point<high_resolution_clock> start, time_point<high_resolution_clock> end);
void outputTime(int data[], void (*f)(int [], int), int size);
void randomData(int data[], int size);
void sortedData(int data[], int size);
void reversedData(int data[], int size);

int main() {
    // format output
    cout << fixed << showpoint;
    cout.precision(9);


    int data[10000],data2[100000];
    cout<<"\n------ALL FUNCTIONS (SEEING WHICH FUNCTIONS ARE O(n^2) AND O(n log(n))------\n";
    randomData(data,10000);
    randomData(data2,100000);

    cout<<"\nMYSTERY 1 TIMES WITH RANDOM DATA, SIZE 10,000 AND 100,000\n";
    outputTime(data, &mystery01, 10000);
    outputTime(data2, &mystery01, 100000);


    cout<<"\nMYSTERY 2 TIMES WITH RANDOM DATA, SIZE 10,000 AND 100,000\n";
    outputTime(data, &mystery02, 10000);
    outputTime(data2, &mystery02, 100000);

    cout<<"\nMYSTERY 3 TIMES WITH RANDOM DATA, SIZE 10,000 AND 100,000\n";
    outputTime(data, &mystery03, 10000);
    outputTime(data2, &mystery03, 100000);

    cout<<"\nMYSTERY 4 TIMES WITH RANDOM DATA, SIZE 10,000 AND 100,000\n";
    outputTime(data, &mystery04, 10000);
    outputTime(data2, &mystery04, 100000);

    cout<<"\nMYSTERY 5 TIMES WITH RANDOM DATA, SIZE 10,000 AND 100,000\n";
    outputTime(data, &mystery05, 10000);
    outputTime(data2, &mystery05, 100000);

    cout<<"\n------O(n^2) FUNCTIONS (COMPARING BEST CASES TO FIND SELECTION SORT)------\n";
    sortedData(data, 10000);
    sortedData(data2, 100000);

    cout<<"\nMYSTERY 2 TIMES WITH SORTED DATA, SIZE 10,000 AND 100,000\n";
    outputTime(data, &mystery02, 10000);
    outputTime(data2, &mystery02, 100000);

    cout<<"\nMYSTERY 3 TIMES WITH SORTED DATA, SIZE 10,000 AND 100,000\n";
    outputTime(data, &mystery03, 10000);
    outputTime(data2, &mystery03, 100000);

    cout<<"\nMYSTERY 5 TIMES WITH SORTED DATA, SIZE 10,000 AND 100,000\n";
    outputTime(data, &mystery05, 10000);
    outputTime(data2, &mystery05, 100000);

    cout<<"\n------O(n^2) FUNCTIONS (COMPARING EXECUTION TIME FOR INSERTION AND BUBBLE)------\n";
    randomData(data2,100000);

    cout<<"\nMYSTERY 2 TIMES WITH RANDOM DATA, SIZE 100,000\n";
    outputTime(data2, &mystery02, 100000);

    cout<<"\nMYSTERY 3 TIMES WITH RANDOM DATA, SIZE 100,000\n";
    outputTime(data2, &mystery03, 100000);

    cout<<"\n------O(n^2) FUNCTIONS (FINDING WORST CASE FOR QUICKSORT)------\n";
    sortedData(data, 10000);
    sortedData(data2, 100000);

    cout<<"\nMYSTERY 1 TIMES WITH SORTED DATA, SIZE 10,000 AND 100,000\n";
    outputTime(data, &mystery01, 10000);
    outputTime(data2, &mystery01, 100000);

    cout<<"\nMYSTERY 4 TIMES WITH SORTED DATA, SIZE 10,000 AND 100,000\n";
    outputTime(data, &mystery04, 10000);
    outputTime(data2, &mystery04, 100000);

    return 0;
}
void randomData(int data[], int size){
    for (int i =0; i < size; i++)
        data[i] = rand()% size;
}
void reversedData(int data[], int size){
    for (int i =size , j=0; i > 0; i--, j++)
        data[j] = i;
}
void sortedData(int data[], int size){
    for (int i =0; i < size; i++)
        data[i] = i;
}
void outputTime(int data[], void (*f)(int [], int), int size){
    time_point<high_resolution_clock> start, end;

    start = high_resolution_clock::now();
    f(data, size);
    end = high_resolution_clock::now();
    getTime(start, end);

}
double getTime(time_point<high_resolution_clock> start, time_point<high_resolution_clock> end){
    //calculate the duration between start and end and print to the terminal
    duration<double> time_in_seconds = end - start;
    cout << fixed << "Duration: " << time_in_seconds.count() << endl;
    return time_in_seconds.count();
}