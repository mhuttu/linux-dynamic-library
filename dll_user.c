#include <stdio.h>
#include <dll.h>

int main (void)
{
    int x, y, array[10] ={2,4,6,8,10,12,13,15,16,16};
    float z;


    printf("Aloitetaan\n");
    x = sum(122, 248);
    printf("Tuliko summaksi %d\n",x);
    y = multiply(10, 248);
    printf("Tuliko tulokseksi %d\n",y);
    z = avg(array, 10);
    printf("Tuliko keskiarvoksi %lf\n",z);
    return 0;
}
