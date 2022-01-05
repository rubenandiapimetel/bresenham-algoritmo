#include <stdio.h>

int main()
{
    
    int x1,y1, x2, y2;
    int dy, dx, d;
    int ae, ane;
    int i;
    
    x1= 2;
    y1 = 1;
    x2 = 8;
    y2 = 5;
    
    dx = x2 - x1;
    dy = y2 - y1;
    
    d = 2*(dy) - dx;
    
    ae = 2*(dy);
    ane = 2* (dy - dx);
    
    if (d <= 0){
        printf("el siguiente punto es abajo \n");
        
        x1++;
    }
    else {
        printf("el siguiente punto es arriba\n");
        d = d + ane;
        x1++;
    }
    
    x1++; //para que empiece desde el 4 porque arriba decidio el primero
    
    while (x1 <= x2){
        if (d<=0){
            d = d + ae;
            printf("el siguiente punto es abajo\n");
            x1++;
        }
        else{
            d = d + ane;
            printf("el siguiente punto es arriba\n");
            x1++;
        }
    }
    
    
    
    

    return 0;
}
