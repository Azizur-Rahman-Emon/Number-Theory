vector<int> getFactors(int n) {
    vector<int> f;
    while (n > 1) {
        f.push_back(spf[n]);
        n /= spf[n];
    }
    return f;
}
int main() {
    buildSPF();

    int n ;

    // prime factors
    vector<int> f = getFactors(n);
    cout << "Prime factors: ";
    for (int x : f) cout << x << " ";
    cout << "\n";
}
