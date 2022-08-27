#include <stdio.h>
#include <stdlib.h>
#include "header.h"


int main()
{

int x,y;
x= 5;
y=2;
printf("Sum of %d , %d = %d \n",x,y,sum(x,y));
printf("Even = %d , Odd = %d \n",!is_Even(x),is_Even(x));
printf("Div = %d \n",divas(x,y));
    return 0;
}
