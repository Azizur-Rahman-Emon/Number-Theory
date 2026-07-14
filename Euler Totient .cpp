//# Euler Totient Function (φ)

//## Definition
//φ(n) = Number of positive integers less than n that are coprime with n.
// Formula:
//phi(n)=p^(e-1)*(p-1)[for every distinct primes facor]
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 5e6 + 9;
int spf[N];
unsigned long long prefix_sum[N];
int main()
{
    for (int i = 2; i < N; i++)
        spf[i] = i;
    for (int i = 2; i < N; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i; j < N; j += i)
            {
                spf[j] = min(spf[j], i);
            }
        }
    }
    for (int i = 1; i < N; i++)
    {
        int x = i;
        int phi = 1;
        while (x > 1)
        {
            int p = spf[x], power = 1;
            while (x % p == 0)
            {
                power *= p;
                x /= p;
            }
            phi *= (power / p) * (p - 1);
        }
        prefix_sum[i] = prefix_sum[i - 1] + phi 
    }
}
