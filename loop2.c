#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, i, sum = 0;
	printf("Enter a number range: ");
	scanf("%d", &x);

    printf(" These are the numbers that are not divisible by 3 in the number range: \n");
{
	for(i = 2; i <= x;)
    {
     if(i%3 != 0)
    printf("%4d", i);
    i++;
    }
{
    sum = sum + i;
    printf("%d", i);
}
    printf("\n The sum is : %d\n", sum);
    return 0;
}
}
