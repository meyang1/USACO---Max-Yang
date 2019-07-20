//Sleepy Cow Herding
//By: Max Yang
//Time: 45 minutes
/*
Since this was mostly reviewed in class, the problem
and logic wasn't too difficult to understand. The
part that probably took me the longest time was
the loop for the minimum and maximum of each cow,
since I had to list the 3 combinations.
*/

//Minimum
//Ex 1: 5 6 7 - 0 moves;
//Ex 2: 4 7 9 - 1 move; 4 moves to 8
//Ex 3: 3 4 7 - 2 moves; 3 moves to 6; 4 moves to 5

//Maximum
//Ex 1: 5 6 7 - 0 moves;
//Ex 2: 4 7 9 - 2 moves; 9 moves to 5; 4 moves to 6
//Ex 3: 3 4 7 - 2 moves; 3 moves to 6; 7 moves to 5

#include <stdio.h>

int main(){
        //Input:
        FILE * In = fopen("herding.in", "r");
        int low, mid, high;
        fscanf(In, "%d %d %d", &low, &mid, &high);
        fclose(In);

        //Swap:
        int temp;
        if(low>mid){
                temp = mid;
                mid = low;
                low = temp;
        }
        if(mid>high){
                temp = high;
                high = mid;
                mid = temp;
        }
        if(low>mid){
                temp = mid;
                mid = low;
                low = temp;
        }

        //Minimum and Maximum:
        int min, max;
        if((mid == low+1) && (high == mid+1)){
                min = 0;
                max = 0;
        }else if((mid == low+1) || (high == mid+1)){
                min = 2;
                max = 2;
        }else{
                min = 1;
                max = 2;
        }
        printf("%d, %d", min, max);

        //Output:
        FILE*Out = fopen("herding.out", "w");
        fprintf(Out,"%d\n%d", min, max);
        fclose(Out);

}
