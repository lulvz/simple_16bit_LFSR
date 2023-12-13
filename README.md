# Simple 16-bit Linear Feedback Shift Register (LFSR)

This project is a simple implementation of a 16-bit Linear Feedback Shift Register (LFSR). I made it as a personal project using Object Oriented Programming (OOP) concepts in C++.

## Learnings

1. **Bitwise Operations**: This project provided a hands-on experience with bitwise operations like shifting and XOR operations, which are fundamental to understanding low-level programming and computer architecture.

2. **Pseudo-random Number Generation**: Implementing the LFSR helped in understanding how computers generate pseudo-random numbers and the importance of initial seed and tap values in the generation process.

3. **Shift Registers**: The project provided a practical understanding of shift registers, their applications, and how they can be used in various fields like cryptography and communications.

## How the LFSR Works

The LFSR works by maintaining a register (the `seed`), which is a 16-bit binary number. The register is initially set to a starting value, and a `tap` position is also defined.

In each step of the LFSR, the following operations are performed:

1. The bit at the `tap` position is XORed with the leftmost bit of the `seed`.
2. The `seed` is shifted left by one bit.
3. The new bit at the rightmost position of the `seed` is set to the result of the XOR operation.

Here is the `step` function from the project that performs these operations:

```cpp
uint8_t LFSR::step(){
    uint8_t bit = (this->seed >> 15) & 1;
    bit = bit ^ this->bitAt(this->tap);
    this->seed = this->seed << 1 | bit;
    return this->seed;
}
```

The `step` function returns the new value of the `seed` after performing the above operations.

The `generate` function simulates the LFSR by performing the `step` operation `n` times and returns the final value of the `seed`:

## Building and Running the Project

You can build and run the project using the provided Makefile. Use the following commands:

```
make
./program
```

## Future Work

This project can be extended to implement more complex LFSR-based systems, such as stream ciphers for cryptography. It can also be modified to use different tap positions or multiple taps, which can produce different sequences of numbers.

## References

1. [Linear Feedback Shift Register](https://en.wikipedia.org/wiki/Linear-feedback_shift_register)