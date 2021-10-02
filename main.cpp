#include <iostream>
#include <chrono>
#include "include/sorting_library.h"

using namespace std;
using namespace chrono;
double getTime(time_point<high_resolution_clock> start, time_point<high_resolution_clock> end);
void outputTime(int data[], void (*f)(int [], int));

int main() {
    // format output
    cout << fixed << showpoint;
    cout.precision(9);
    print_version_number();
    //create a start and end time_point object
    time_point<high_resolution_clock> start, end;

    //make some data to sort
    int data[50];
    for (int i = 0; i < 50; i++)
        data[i] = i;

    // output times of mystery03 by calling function
    outputTime(data, &mystery03);

    // output time of mystery03 within main
    start = high_resolution_clock::now();
    mystery03(data, 50);
    end = high_resolution_clock::now();
    getTime(start, end);

    start = high_resolution_clock::now();
    mystery03(data, 50);
    end = high_resolution_clock::now();
    getTime(start, end);

    start = high_resolution_clock::now();
    mystery03(data, 50);
    end = high_resolution_clock::now();
    getTime(start, end);

    start = high_resolution_clock::now();
    mystery03(data, 50);
    end = high_resolution_clock::now();
    getTime(start, end);
    return 0;
}
double getTime(time_point<high_resolution_clock> start, time_point<high_resolution_clock> end){
    //calculate the duration between start and end and print to the terminal
    duration<double> time_in_seconds = end - start;
    cout << fixed << "Duration: " << time_in_seconds.count() << endl;
    return time_in_seconds.count();
}
void outputTime(int data[], void (*f)(int [], int)){
    time_point<high_resolution_clock> start, end;
    cout<<"\nMYSTERY SORT 3 TIMES: \n";

    double average= 0;
    for(int i=0; i<5; i++){
        start = high_resolution_clock::now();
        f(data, 50);
        end = high_resolution_clock::now();
        average += getTime(start, end);
    }

    average /= 5;
    cout<<"AVERAGE:  "<<average<<endl<<endl;
}
