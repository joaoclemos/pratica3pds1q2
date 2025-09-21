#include <stdio.h>

void testaTroca(float x, float y){
    troca(&x, &y);
    printf("%.4f %.4f", x, y);
    }
