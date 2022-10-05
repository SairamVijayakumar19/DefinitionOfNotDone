/*
 * File:   main.c
 * Author: Sairam Vijayakumar
 *
 * Created on 30. September 2022, 09:03
 */

#include <stdio.h>
#include <stdlib.h>

void printArray(int Numbs[], int Size) {

    for (int i = 0; i < Size; ++i) {

        printf("%d", Numbs[i]);

        printf("\n");

    }

}
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;


        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);


        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}
int main(int argc, char** argv) {

    int nümbs[] = {-2, 45, 0, 11, -9};

    int Size = sizeof(nümbs) / sizeof(nümbs[0]);
    for (int step = 0; step < Size - 1; ++step) {
        for (int i = 0; i < Size - step - 1; ++i) {
            if (nümbs[i] > nümbs[i + 1]) {
                int temp = nümbs[i];
                nümbs[i] = nümbs[i + 1];

                nümbs[i + 1] = temp;

            }}}
    int x = 10;
    int result = binarySearch(nümbs, 0, Size - 1, x);
    (result == -1)
    ? printf("Element ist nicht im array")
    : printf("Element ist an der Position  %d", result);
    printf("\n");
    printf("Sorted Array in Ascending Order:\n");
    printArray(nümbs, Size);
    return (EXIT_SUCCESS);
}




