#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jo;
    printf("enter a number");
    scanf("%d",&jo);

    if(jo>=0)
        printf("%d is a positive number.",jo);
    else
        printf("%d is a negative number.",jo);
    return 0;


}
