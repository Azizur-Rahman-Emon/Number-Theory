// Every even integer geater than 2 can be expressed as the sum of twin primes
// For all even integer x from 4 to 10^5,find any two primes such that their sum is x;
// For all odd integer x froms 4 to 10^5,find two primes: Just check 2 and n-2 prime or not..and for all odd has three primes such that their sum is x;
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;

int spf[N];
void sieve() {
  for(int i = 2; i < N; i++) {
    spf[i] = i;
  }
  for(int i = 2; i < N; i++) {
    if (spf[i] == i) {
      for (int j = i; j < N; j += i) {
        spf[j] = min(spf[j], i);
      }
    }
  }
}
bool ok(int n) { // checking if possible
  for (int i = 2; i < n; i++) {
    if (spf[i] == i and spf[n - i] == n - i) {
      return true;
    }
  }
  return false;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  sieve();
  for (int n = 4; n <= 100000; n += 2) {
    if (!ok(n)) cout << n << '\n';
  }
  return 0;
}
