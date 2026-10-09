#include <stdio.h>

//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/


int main() {
    int n, target, index = -1;

    // Read the number of elements in the array
    scanf("%d", &n);

    int arr[n];

    // Read the elements of the array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the target element to search for
    scanf("%d", &target);

    // Perform linear search
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            index = i;
            break;
        }
    }

    // Print the result
    printf("%d\n", index);

    return 0;
}


//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/

int main() {
    int n;

    // Read the number of elements in the array
    scanf("%d", &n);

    int arr[n];

    // Read the elements of the array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the array in place
    for(int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    // Print the reversed array
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}