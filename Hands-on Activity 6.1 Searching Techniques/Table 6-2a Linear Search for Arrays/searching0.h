#ifndef SEARCHING_H
#define SEARCHING_H

#include <iostream>

void linearSearch(int data[], int n, int item) {
    for (int i = 0; i < n; i++) {
        if (data[i] == item) {
            std::cout << "Searching is successful: " << item << " found.\n";
            return; // Exit the function if the item is found
        }
    }

    std::cout << "Searching is Unsuccessful: " << item << " not found.\n"; // If the item is not found after the loop
}

#endif // SEARCHING_H
