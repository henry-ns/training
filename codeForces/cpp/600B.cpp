#include <bits/stdc++.h>

using namespace std;

// codeforces.com/problemset/problem/600/B
int main() {
  int n = 0, m = 0;
  scanf("%d %d", &n, &m);

  int a[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  int b[m];
  for (int i = 0; i < m; i++)
    scanf("%d", &b[i]);

  sort(a, a + n);

  for (int i = 0; i < m; i++) {
    int pos = 0, mid;
    int left = 0, right = n - 1;

    if (b[i] >= a[n - 1]) {
      pos = n;
    } else if (b[i] < a[0]) {
      pos = 0;
    } else {
      while (left <= right) {
        mid = (left + right) / 2;
        if (a[mid] > b[i]) {
          if (a[mid - 1] <= b[i]) {
            pos = mid;
            break;

          } else
            right = mid - 1;

        } else
          left = mid + 1;
      }
    }
    printf("%d ", pos);
  }

  return 0;
}
