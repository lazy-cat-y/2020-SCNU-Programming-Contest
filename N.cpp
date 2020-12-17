#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int k = 0, n = 0, max = 0;
    cin >> k >> n;
    int arr[200001];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i <= n; i++)
    {
        int d = 0;
        if (i == 0)
        {
            d = arr[i];
        }
        else if (i == n)
        {
            d = k - arr[i-1] + arr[0];
        }
        else
        {
            d = arr[i] - arr[i - 1];
        }

        if (d > max)
        {
            max = d;
        }
    }
    cout << k - max;
    return 0;
}