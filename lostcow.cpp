//The Lost Cow
//2017 US Open Contest

#include <stdio.h>
#include <cstdlib>

int main(){
    FILE * In = fopen("lostcow.in", "r");
    int x, y, steps, direction, num, units;

    fscanf(In, "%d %d", &x, &y);
    steps = 0;
    direction = 1;
    units = 1;
    num = 0;

    while(num==0){
        if(((direction==1)&&(x<=y)&&((x+units)>=y))||((direction=-1)&&(y<=x)&&((x-units)<=y))){
            steps = steps + abs(y-x);
            num = 1;
        }else{
            steps = steps+units*2;
            units = units*2;
            direction = direction*-1;
        }
    }

    printf("Total number of steps: %d\n", steps);
    fclose(In);

    FILE * Out = fopen("lostcow.out", "w");
    fprintf(Out, "%d", steps);
    fclose(Out);
    }
