//Bovine Shuffle
//By: Max Yang
//Time: 1 hour and 30 minutes
/*
The problem took some time to understand, but I think I got the main parts 
of it. I mostly spent time trying to implement maps into the programming, 
which I still didn't really understand completely after using them. Also,
when I tried running the program into the USACO website, a lot of compilation
errors occured, even though there were no errors while running in the command 
line. 
*/
int main(){
    std::map<int, int> CowId;
    std::map<int,int>::iterator it;

    FILE * In = fopen("shuffle.in", "r");

    int cows;
    fscanf(In, "%d", &cows);

    //Position after 3 shuffles
    int pos[cows+1];
    for(int i=0; i<=cows; i++){
            fscanf(In, "%d", &pos[i]);
    }

    //Cow Ids
    int id[cows+1];
    for(int j=0; j<=cows; j++){
            fscanf(In, "%d", &id[j]);
    }

    fclose(In);

    //Input into map
    for(int k=0; k<=cows; k++){
            int m;
            pos[k] = m;
            CowId.insert(std::pair<int, int> (m,id[k]));
    }

    FILE * Out = fopen("shuffle.out", "w");

    for(int m=1; m<=cows; m++){
           int ans = CowId.find(m)->second;
           printf("%d\n", ans);

           fprintf(Out, "%d\n", ans);
    }


    fclose(Out);
}
