#include <stdio.h>

int sum(int x, int y)
{
    int sum;
    sum = x+y;
    printf("Sum of %d and %d is %d \n",x,y,sum);
    return sum;
}

int multiply(int x, int y)
{
    int sum;
    sum = x*y;
    printf("%d times %d is %d \n",x,y,sum);
    return sum;
}

float avg(int* array, int length)
{
    int sum=0,i=0;
    float avg=0;

    for (i=0; i<length; i++)
    {
    sum = sum + array[i];

    }
    avg = sum/length;
    printf("Length: %d Sum: %d Average: %f \n",length,sum,avg);
    return avg;
}
/*
int main()
{
    return 0;
}
*/
