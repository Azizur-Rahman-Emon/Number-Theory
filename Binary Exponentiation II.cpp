long long binpow(long long a, long long b, long long mod) {
    long long res = 1;
    a %= mod;
    while (b > 0) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
long long a, b, c, mod;
cin >> a >> b >> c >> mod;

// step 1: exponent reduce
long long exp = binpow(b, c, mod - 1);

// step 2: final answer
long long ans = binpow(a, exp, mod);

cout << ans << endl;
