#include <iostream>
#include <chrono>
#include "include/sorting_library.h"


int main() {

    //make some data to sort
    int data[50];
    for (int i = 0; i < 50; i++)
        data[i] = i;

    std::cout << std::fixed << std::showpoint;
    std::cout.precision(9);
    print_version_number();
    //create a start and end time_point object
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;

    //get the current time, run the algo, then get the current time again
    start = std::chrono::high_resolution_clock::now();
    mystery03(data, 50);
    end = std::chrono::high_resolution_clock::now();

    //calculate the duration between start and end and print to the terminal
    std::chrono::duration<double> time_in_seconds = end - start;
    std::cout << std::fixed << "Duration: " << time_in_seconds.count() << std::endl;
    return 0;
}
