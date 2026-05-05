unsigned setbits(unsigned x, int p, int n, unsigned y) {
    unsigned x_cleared = x & ~(~(~0 << n) << (p + 1 - n));
    unsigned y_bits = (y & ~(~0 << n)) << (p + 1 - n);
    
    return x_cleared | y_bits;
}
