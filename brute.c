/**
 * Print all possible combinations of a byte
*/
#include <stdio.h>

int main (void)
{
    // Max 255 bytes in a filename * 8 bits per byte = 2040 bits total
    int array_length = 2040; 
    int bin_array[array_length];

    // Initialize array
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

            // Print array
            for (int k = 0; k < array_length; k++)
            {
                printf("%i", bin_array[k]);
                
            }
            printf("\n");
        }
    }

    return 0;
}