#include <stdio.h>
int main() {
int n, i, sum = 0;
printf("Enter N: ");
scanf("%d", &n);
6
for(i = 1; i <= n; i++) {
if(i % 2 != 0) {
sum = sum + i;
}
}
printf("Sum of Odd Numbers = %d\n", sum);
return 0;
}
