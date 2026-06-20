const int N = 1e6 + 5;
int spf[N];

void build_spf()
{
    for (int i = 1; i < N; i++)
        spf[i] = i;

    for (int i = 2; i * i < N; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j < N; j += i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

vector<int> prime_factorization(int n)
{
    vector<int> factors;

    while (n > 1)
    {
        factors.push_back(spf[n]);
        n /= spf[n];
    }

    return factors;
}
