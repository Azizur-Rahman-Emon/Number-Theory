#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
int spf[N];

void buildSPF() {
    for (int i = 1; i < N; i++) spf[i] = i;  // initially itself

    for (int i = 2; i * i < N; i++) {
        if (spf[i] == i) {  // prime
            for (int j = i * i; j < N; j += i) {
                if (spf[j] == j) spf[j] = i; // set smallest prime factor
            }
        }
    }
}
