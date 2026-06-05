#ifndef STATS_H
#define STATS_H

/**
 * @brief Print statistics about an array.
 *
 * Prints the minimum, maximum, mean, and median values
 * of the provided array.
 *
 * @param array Array containing the data.
 * @param length Number of elements in the array.
 */
void print_statistics(int array[], int length);

/**
 * @brief Print an array to the screen.
 *
 * Prints each element of the array in its current order.
 *
 * @param array Array to be printed.
 * @param length Number of elements in the array.
 */
void print_array(int array[], int length);

/**
 * @brief Find the median of an array.
 *
 * Sorts the array and returns the median value.
 *
 * @param array Array containing the data.
 * @param length Number of elements in the array.
 *
 * @return Median value of the array.
 */
int find_median(int array[], int length);

/**
 * @brief Find the mean of an array.
 *
 * Calculates the arithmetic average of all elements.
 *
 * @param array Array containing the data.
 * @param length Number of elements in the array.
 *
 * @return Mean value of the array.
 */
int find_mean(int array[], int length);

/**
 * @brief Find the largest value in an array.
 *
 * Searches the array and returns the maximum value.
 *
 * @param array Array containing the data.
 * @param length Number of elements in the array.
 *
 * @return Largest value in the array.
 */
int find_maximum(int array[], int length);

/**
 * @brief Find the smallest value in an array.
 *
 * Searches the array and returns the minimum value.
 *
 * @param array Array containing the data.
 * @param length Number of elements in the array.
 *
 * @return Smallest value in the array.
 */
int find_minimum(int array[], int length);

/**
 * @brief Sort an array in descending order.
 *
 * Rearranges the array so that the largest value is at
 * index 0 and the smallest value is at the last index.
 *
 * @param array Array to be sorted.
 * @param length Number of elements in the array.
 */
void sort_array(int array[], int length);

#endif