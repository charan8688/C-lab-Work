#include <stdio.h>

int main()
{
  int n, arr[1000], b, d, t, sum = 0;

  printf("Enter numbers");
  scanf("%d", &n);

  printf("Enter %d integers", n);

  for (b = 0; b< n; b++)
    scanf("%d", &arr[b]);

  for (b = 1 ; b <= n-1; b++) {
    t = arr[b];

    for (d = b - 1 ; d >= 0; d--) {
      if (arr[d] > t) {
        arr[d+1] = arr[d];
        sum = 1;
      }
      else
        break;
    }
    if (sum)
      arr[d+1] = t;
  }
}