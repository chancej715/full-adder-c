/**
 * Print all possible combinations of a byte.
*/
#include <stdio.h>

int main (void)
{
    int array_length = 8; // Number of bits
    int bin_array[array_length];

    // Initialize the array with all 0s
    for (int i = 0; i < array_length; i++)
        bin_array[i] = 0;

    int offset = 0;

    for (int i = 0; i < array_length; i++)
    {
        for (int j = 0; j < array_length - offset; j++)
        {
            if (!bin_array[j])
            {
                bin_array[j] = 1;

                if (j != 0 && bin_array[j-1] == 1)
                    bin_array[j-1] = 0;

                if (j == (array_length-1)-offset)
                    offset += 1;
            }

            // Print the array
            for (int k = 0; k < array_length; k++)
            {
                printf("%i", bin_array[k]);
                
            }
            printf("\n");
        }
    }

    return 0;
}