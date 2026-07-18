    int n;
    cin >> n;
    if (n <= 1)
    {
        cout << 1 << endl;
    }
    double digit = 0;
    for (int i = 2; i <= n; i++)
    {
        digit += log10(i);
    }
    cout << floor(digit) + 1 << endl;
