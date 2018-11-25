
/** @file main.c
 *  @brief Main function
 * 
 *  This file contains main function for the project 
 *  written for C practice programs from GeeksForGeeks.
 * 
 *  @author Tropical Sun
 *  @bug No known bugs.
 */
#include "stdio.h"
#include "array.h"

int main()
{
    int array[] = {2,3,4,5};
    int sumArray = Array_Sum(array, sizeof(array) / sizeof(array[0]));

    printf("sum = %d\n", sumArray);    
    return 0;
}