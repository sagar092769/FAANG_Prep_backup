#include <bits/stdc++.h>
using namespace std;
int solve(int arr[], int target, int n) {
    int si = 0;
    int ei = n - 1;
    while (si <= ei) {
        int mid = (si + ei) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] > arr[n - 1]) {
            if (target > arr[mid] || target < arr[0]) {
                si = mid + 1;
            } else {
                ei = mid - 1;
            }
        }
        if (arr[mid] < arr[0]) {
            if (arr[mid] > target || target > arr[n - 1]) {
                ei = mid - 1;
            } else {
                si = mid + 1;
            }
        }
    }
    return -1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    cout << solve(arr, target, n);

    return 0;
}
