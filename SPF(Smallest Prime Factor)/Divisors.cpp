vector<int> getDivisors(int n) {
    vector<int> divs = {1};
    while (n > 1) {
        int p = spf[n];
        int cnt = 0;
        while (n % p == 0) {
            n /= p;
            cnt++;
        }

        vector<int> tmp;
        for (int d : divs) {
            long long val = 1;
            for (int i = 0; i < cnt; i++) {
                val *= p;
                tmp.push_back(d * val);
            }
        }
        for (int x : tmp) divs.push_back(x);
    }
    sort(divs.begin(), divs.end());
    return divs;
}
int main()
{
    buildspf();
     // divisors
    vector<int> d = getDivisors(n);
    cout << "Divisors: ";
    for (int x : d) cout << x << " ";
    cout << "\n";

    return 0;

}
