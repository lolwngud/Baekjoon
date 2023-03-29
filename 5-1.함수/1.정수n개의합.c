long long sum(int *a, int n)
{
    int i;
    long long res;

    i = 0;
    res = 0;
    while (i < n)
    {
        res += a[i];
        i++;
    }
    return(res);
}