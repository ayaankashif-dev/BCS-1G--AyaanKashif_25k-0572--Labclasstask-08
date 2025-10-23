#include <stdio.h>

 int main() {
    int i, j,num;
    printf("Enter num:");
    scanf("%d", &num);
 
for (i = 1; i <= num; i++) {
    printf("%d:", i);
 for (j = 1; j <= 5; j++) {
    
 printf(" %d\t", i * j);
}
 printf("\n");
 }
  return 0;
}