#include <iostream>
#include "searching0.h"

using namespace std;

int main() {
    int data[] = {10, 20, 30, 40, 50};
    int n = sizeof(data) / sizeof(data[0]); // Calculate the number of elements
    int item = 30; // The item we want to search for

    linearSearch(data, n, item); // Call the linear search function

    item = 60; // Another item to search for
    linearSearch(data, n, item); // Call the linear search function again

    return 0;
}
