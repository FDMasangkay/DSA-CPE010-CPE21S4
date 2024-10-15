#include <iostream>
#include <cstdlib> // for generating random integers
#include <ctime> // will be used for our seeding function

const int max_size = 50;

int main() {
    int dataset[max_size];
    srand(time(0)); // Seed the random number generator

    // Generate random values
    for (int i = 0; i < max_size; i++) {
        dataset[i] = rand();
    }

    // Show your dataset's content
    for (int i = 0; i < max_size; i++) {
        std::cout << dataset[i] << " ";
    }

    return 0;
}
