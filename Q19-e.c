#include <stdio.h>
int main() {

  int i, n;

  
  int n1 = 0, n2 = 1;

  
  int n3 = n1 + n2;

  // get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // print the first two terms t1 and t2
  printf("Fibonacci Series: %d, %d, %d, ", n1, n2,n3);

  // print 3rd to nth terms
  for (i = 3; i <= n; i++) {
    
    n1 = n2;
    n2 = n3;
    n3= n1 + n2;
    printf("%d, ", n3);
  }

  return 0;
}

