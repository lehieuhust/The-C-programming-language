unsigned rightrot(unsigned x, int n) {
    int wordsize = sizeof(unsigned) * 8;
    n = n % wordsize;
    
    if (n == 0) return x;
    unsigned right_bits = x & ~(~0 << n);
    return (x >> n) | (right_bits << (wordsize - n));
}
