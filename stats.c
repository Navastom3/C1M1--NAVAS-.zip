#include <stdio.h>
#include "stats.h"

int main() {

    //I used an array including everything that could make it more complicated to really test drive the program,
    //negative numbers, messy patterns, duplicates and a 0
    int a[] = {42, -7, 15, 15, 0, 99, -23, 8};
    int length = 8;

    sort_array(a, length);
    print_array(a, length);
    print_statistics(a, length);

    return 0;
}

void print_statistics(int array[], int length) {

    printf("Minimum: %d\n", find_minimum(array, length));
    printf("Maximum: %d\n", find_maximum(array, length));
    printf("Mean: %d\n", find_mean(array, length));
    printf("Median: %d\n", find_median(array, length));
}

void print_array(int array[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d", array[i]);
        printf(" ");
    }

    printf("\n");
}

int find_median(int array[], int length) {

    //Get the array sorted first
    sort_array(array, length);

    int l = length / 2;

    //case 1 : number of entries is odd
    if (length % 2 != 0) {
        return array[l];
    }

    //case 2 : number of entries is even
    else {
        return (array[l] + array[l - 1]) / 2;
    }
}

int find_mean(int array[], int length) {

    //calculate the sum
    int sigma = 0;

    for (int i = 0; i < length; i++) {
        sigma += array[i];
    }

    return sigma / length;
}

int find_maximum(int array[], int length) {

    int max = array[0];

    for (int i = 1; i < length; i++) {

        //compare the current element to max and set it to the new maximum if it is superior
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;

    //alternatively, for the sake of simplicity and memory use we could use the sort_array function to get it in decreasing order which means the first term would be the maximum and then
    //just return array[0] as the value but this version ensures that the function gets the maximum value of any array
}

int find_minimum(int array[], int length) {

    int min = array[0];

    for (int i = 1; i < length; i++) {

        //compare the current element to max and set it to the new maximum if it is superior
        if (array[i] < min) {
            min = array[i];
        }
    }

    return min;

    //alternatively, for the sake of simplicity and memory use we could use the sort_array function to get it in decreasing order which means the last term would be the minimum and then
    //just return array[length - 1] as the value but this version ensures that the function gets the minimum value of any array
}

void sort_array(int array[], int length) {

    //compare all elements index by index to ensure array[0] is the largest and array[length -1] is the smallest.
    for (int i = 1; i < length; i++) {
        for (int j = 0; j < i; j++) {

            if (array[j] < array[i]) {
                int value = array[j];
                array[j] = array[i];
                array[i] = value;
            }
        }
    }
}