#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *                using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elementes in array.
 * @value: The value to search for.
 * 
 * Returns: On success -  first index where value is located. Otherwise, -1.
 */
int jump_search(int *array, int size, int value)
{
    int n = size - 1;
    int jump = sqrt(n);
    int lst_jmp = 0, i;

    if (array == NULL)
        return (-1);

    while (jump <= n + sqrt(n))
    {
        printf("Value checked array[%d] = [%d]\n", lst_jmp, array[lst_jmp]);
        
        if (array[jump] >= value)
        {
            printf("Value found between indexes [%d] and [%d]\n", lst_jmp, jump);
            
            for (i = lst_jmp; i <= jump; i++)
            {
                printf("Value checked array[%d] = [%d]\n", i, array[i]);

                if (array[i] == value)
                    return (i);
            }
        }

        if (jump >= n + sqrt(n))
        {
            printf("Value found between indexes [%d] and [%d]\n", lst_jmp, jump);
            for (i = lst_jmp; i <= n; i++)
            {
                printf("Value checked array[%d] = [%d]\n", i, array[i]);

                if (array[i] == value)
                    return (i);
            }
        }
        lst_jmp = jump;
        jump += sqrt(n);
    }
    return (-1);
}