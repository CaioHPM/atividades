#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
    float chico = 1.5, ze = 1.1, anos;

    while (ze < chico)
    {
        chico += 0.2;
        ze += 0.3;
        anos++;
    }
    
    printf("Em %.1fanos ze sera maior que chico.", anos);
    
}
