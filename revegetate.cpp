//The Great Revegetation
//By: Max Yang
//Time: 1.5 hours
/*
Overall, understanding the problem was the hardest to do
and took the longest time. After 1 hour of attempting
the combinations and logic of the problem, I tried to
complete the programming logic, but I couldn't figure out
how to structure the array to have enough columns and rows
to restructure its columns for every field. I also had
trouble actually programming the logic for deciding the
seed in the field, although I did understand the problem.
*/

//Logic:
//Always make the first field a 1
//Find the first field's lowest field number that a cow does not have as the same and also set as 1
//For the next fields, follow until lowest possible number

#include <stdio.h>
int main(){
        FILE * In = fopen("revegetate.in", "r");
        int fields, cows;
        fscanf(In, "%d %d", &fields, &cows);

        int first_f[cows+1], second_f[cows+1];
        for(int i = 0; i<=cows; i++){
                fscanf(In, "%d %d", &first_f[i], &second_f[i]);
        }
        fclose(In);

        int ans[fields];
        for(int j = 0; j<=cows; j++){
                //?
        }

        FILE * Out = fopen("revegetate.out", "w");
        for(int k = 0; k<=fields; k++){
                fscanf(Out, "%d", ans[k]);
        }
}

//Example:
//6 7 -- 6 possible fields with 7 different cow cases
//1 2
//3 2
//5 6
//5 1
//2 4
//4 5
//3 6

//Possible Cases (fields - f)
//1f != 2f, 5f (3f, 4f, 6f)
//2f != 1f, 3f, 4f (5f, 6f)
//3f != 2f, 6f (1f, 4f, 5f)
//4f != 2f, 5f (1f, 3f, 6f)
//5f != 1f, 4f, 6f (2f, 3f)
//6f != 3f, 5f (1f, 2f, 4f)

//1st Step:
//1f = 1 (no f means the number of bucket of seed)
//3f is lowest possible for 1f, so 3f = 1
//Since both 1f and 3f can equal to 4f, 4f = 1
//Since only 1f can equal to 6f and 3f cannot equal 6f, 6f != 1
//End of step: 1f = 1, 3f = 1, 4f = 1


//2nd Step:
//As the next field w/ biggest impact to end, 2f = 2
//5f is lowest possible for 2f, so 5f = 2
//Since only 2f can equal to 6f and 5f cannot equal 6f, 6f != 3
//End of step: 1f = 1, 2f = 2, 3f = 1, 4f = 1, 5f = 2


//3rd Step:
//As only field left, 6f = 3
//End of step: 1f = 1, 2f = 2, 3f = 1, 4f = 1, 5f = 2, 6f = 3
