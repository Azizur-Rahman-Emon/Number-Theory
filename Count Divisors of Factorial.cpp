	int totalDivisors(int n) {
		vector<bool>isprime(n + 1, true);
		vector<int>prime;
		long long divisors = 1;
		for (int i = 2; i*i <= n; i++)
			{
			if (isprime[i])
				{
				for (int j = i*i; j <= n; j += i)
					{
					isprime[j] = false;
				}
			}
		}
		for (int i = 2; i <= n; i++)
			{
			if (isprime[i])
				{
				prime.push_back(i);
			}
		}
		for (int i = 0; i<prime.size(); i++)
			{
			long long p = prime[i];
			long long x = n;
			int power = 0;
			while (x)
				{
				power += x/p;
				x /= p;
			}
			divisors *= (power + 1);
		}
		return divisors;
	}
