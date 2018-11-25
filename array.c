
/** @file array.c
 *  @brief Array C Programs
 * 
 *  This file contains functions written 
 *  for Array C/C++ practice problems using C language 
 *  from GeeksForGeeks.
 * 
 *  @author Tropical Sun
 *  @bug No known bugs.
 */

#include <stdlib.h>

int Array_Sum(int inputArray[], size_t size)
{
    int sum = 0;

    // The following commented code is wrong: 
    // In C, array parameters are treated as pointers. So the expression becomes
    // sizeof (int *) / sizeof(int) which results in 2.
    // size_t arraySize = sizeof(inputArray) / sizeof(inputArray[0]);
    
    for (int i = 0; i < size; i++)
    {
        sum += inputArray[i];
    }

    return sum;
}