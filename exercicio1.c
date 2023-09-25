#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
    int x;
    float y;

    y = (5*x + 3) / sqrt(pow(x, 2) - 16);

    printf("%.2f", y);
}
