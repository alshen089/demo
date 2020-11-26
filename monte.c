#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int in_circle = 0;
    int iter = 1000000;
    
    for (int i = 0; i < iter; i++)
    {
        int x = rand() % 10000;
        int y = rand() % 10000;
        if (x*x + y*y <= 10000*10000)
            in_circle++;
    }
    
    double pi = (double)in_circle / (double)iter * 4;
    printf("%f\n", pi);
    return 0;
}
