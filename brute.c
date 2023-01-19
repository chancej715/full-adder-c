#include <stdio.h>

int main(void)
{
    // Logic gates
    int and(int a, int b) { return a & b; }
    int or(int a, int b) { return a | b; }
    int xor(int a, int b) { return a ^ b; }

    // Half adder
    int half_adder_out[2]; // sum, carry

    void half_adder(int a, int b)
    {
        int sum = xor(a, b);
        int carry = and(a, b);

        // Output
        half_adder_out[0] = sum;
        half_adder_out[1] = carry;
    }

    // Full adder
    int full_adder_out[2]; // sum, carry

    void full_adder(int a, int b, int carry_in)
    {
        // First half adder
        half_adder(a, b);

        int half_sum_out = half_adder_out[0];
        int half_carry_out = half_adder_out[1];

        // Second half adder
        half_adder(carry_in, half_sum_out);

        int sum_out = half_adder_out[0];
        int carry_out = or(half_carry_out, half_adder_out[1]);

        // Output
        full_adder_out[0] = sum_out;
        full_adder_out[1] = carry_out;
    }

    return 0;
}