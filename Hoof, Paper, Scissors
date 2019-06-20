//Hoof, Paper, Scissors
#include <stdio.h>
int main(){
    FILE * In = fopen("hps.in", "r");
    int N, a, b, games_won, games_lost;

    games_won = 0;
    games_lost = 0;

    fscanf(In, "%d", &N);
    while(N != 0){
        fscanf(In, "%d %d", &a, &b);
        //1 is hoof, 2 is paper, 3 is scissors
        //h beats s, p beats h, and s beats p
        if(a==b){
            printf("Tie\n");
            N--;
        }
        else if((a==1 && b==2)||(a==2 && b==3)||(a==3 && b==1)){
            printf("Cow 2 wins\n");
            N--;
            games_lost++;
        }
        else{
            printf("Cow 1 wins\n");
            N--;
            games_won++;
        }
    }
    fclose(In);

    if(games_won >= games_lost){
        printf("Amount of games won: %d\n", games_won);
    }else{
        games_won = games_lost;
        printf("Amount of games won: %d\n", games_won);
    }

    FILE * Out = fopen("hps.out", "w");
    fprintf(Out, "%d", games_won);
    fclose(Out);
}
