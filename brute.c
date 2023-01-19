#include <stdio.h>

int main(void)
{
    // Logic gates
    int and(int a, int b) { return a & b; }
    int xor(int a, int b) { return a ^ b; }

    // Half adder
    int half_adder_out[2]; // sum, carry

    void half_adder(int a, int b)
    {
        int sum = xor(a, b);
        int carry = and(a, b);

        half_adder_out[0] = sum;
        half_adder_out[1] = carry;
    }

    // Full adder
    int full_adder_out[2]; // sum, carry

    void full_adder(int a, int b, int carry_in)
    {
        // First half adder
        

        // Second half adder
    }

    return 0;
}