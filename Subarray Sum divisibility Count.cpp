int subCount(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<long long> pre(n + 1, 0);
    for (int i = 1; i <= n; i++)
        pre[i] = pre[i - 1] + arr[i - 1];
    for (int i = 1; i <= n; i++)
    {
        pre[i] = ((pre[i] % k) + k) % k;
    }
    map<int, int> mp;
    int subarray = 0;
    for (int i = 1; i <= n; i++)
    {
        if (pre[i] == 0)
            subarray++;
        subarray += mp[pre[i]];
        mp[pre[i]]++;
    }
    return subarray;
}
