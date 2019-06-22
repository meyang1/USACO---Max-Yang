//Fence Painting
//December 2015 USACO
#include <stdio.h>
#include <cstdlib>

int main(){
    FILE * In = fopen("paint.in", "r");
    int a, b, c, d, total;

    fscanf(In, "%d %d", &a, &b);
    fscanf(In, "%d %d", &c, &d);

    if((a<=c)&&(b>=d)){
        total = b-a;
    }else if((a<=d)&&(b>=c)){
        total = b-c;
    }else{
        total = (b-a)+(d-c);
    }

    printf("Total units of fence: %d\n", total);
    fclose(In);

    FILE * Out = fopen("paint.out", "w");
    fprintf(Out, "%d", total);
    fclose(Out);
}
