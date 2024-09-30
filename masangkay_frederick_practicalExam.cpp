//write a c++ program to append a new item to the end of the array.
//number = {1,2,3,4,5,6,7,8,9,10}

#include <iostream>
using namespace std;

int main () {
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int newElement;

    do{
        if (n < 20) {
            
            cout << "Enter a new value: ";
            cin >> newElement;
            
            arr[n] = newElement;
            n++;

        }
        
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }while(n < 20);
    
    return 0;
}
