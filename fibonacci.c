//The program prints the Fibonacci series upto the number of terms entered by the user.
#include <stdio.h>
int main() {
  int i, n, t1, t2, sum;
  t1 = 0;
  t2 = 1;
  sum = 1;

  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d, %d, ", t1, t2);

  for (i = 3; i < n; ++i) {
    printf("%d, ", sum);
    t1 = t2;
    t2 = sum;
    sum = t1 + t2;
  }
  
  printf("%d", sum);
  return 0;
}
