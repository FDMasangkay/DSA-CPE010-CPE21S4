#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For seeding rand()

using namespace std;

#define ARRAY_SIZE 100
#define NUM_CANDIDATES 5

// Function to generate a random array of votes (values from 1 to 5)
void generateVotes(int arr[], int size) {
    srand(time(0));  // Seed random number generator
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % NUM_CANDIDATES + 1;  // Generate random number between 1 and 5
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Insertion Sort Algorithm
template <typename T>
void insertionSort(T arr[], const int N) {
    int K = 1, J;
    T temp;
    
    while (K < N) {
        temp = arr[K];
        J = K - 1;
        
        while (J >= 0 && temp < arr[J]) {
            arr[J + 1] = arr[J];
            J--;
        }
        
        arr[J + 1] = temp;
        K++;
    }
}

// Function to count votes for each candidate
void countVotes(int arr[], int size, int voteCount[]) {
    for (int i = 0; i < size; i++) {
        voteCount[arr[i] - 1]++;
    }
}

// Function to find the candidate with the highest votes
int findWinner(int voteCount[], int numCandidates) {
    int maxVotes = voteCount[0];
    int winner = 1;
    
    for (int i = 1; i < numCandidates; i++) {
        if (voteCount[i] > maxVotes) {
            maxVotes = voteCount[i];
            winner = i + 1;  // Candidate numbers are 1-based
        }
    }
    
    return winner;
}

int main() {
    int arr[ARRAY_SIZE];
    int voteCount[NUM_CANDIDATES] = {0};  // Array to store vote counts for each candidate

    // Step 1: Generate random votes
    generateVotes(arr, ARRAY_SIZE);

    // Step 2: Display unsorted votes
    cout << "Unsorted votes: \n";
    printArray(arr, ARRAY_SIZE);

    // Step 3: Sort the array using insertion sort
    insertionSort(arr, ARRAY_SIZE);

    // Step 4: Display sorted votes
    cout << "\nSorted votes: \n";
    printArray(arr, ARRAY_SIZE);

    // Step 5: Count the votes for each candidate
    countVotes(arr, ARRAY_SIZE, voteCount);

    // Step 6: Display vote count for each candidate
    cout << "\nVote count for each candidate: \n";
    for (int i = 0; i < NUM_CANDIDATES; i++) {
        cout << "Candidate " << i + 1 << ": " << voteCount[i] << " votes" << endl;
    }

    // Step 7: Determine the winner
    int winner = findWinner(voteCount, NUM_CANDIDATES);
    cout << "\nThe winner is Candidate " << winner << "!" << endl;

    return 0;
}
