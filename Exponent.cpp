long long enxponent(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) {
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}
