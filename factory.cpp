//Milk Factory
//USACO 2019 US Open Contest

#include <cstdio>
#include <cstdlib>

int main(){
    FILE * In = fopen("factory.in", "r");
    int N;
    fscanf(In, "%d", &N);
    int A[N], B[N];
    for(int i=0; i<N-1; i++){
        fscanf(In, "%d %d", &A[i], &B[i]);
    }
    fclose(In);
    //----------------------------------------
    for (int i_lines = 1; i_lines <= N-1; i_lines++){
        int lines = i_lines;
        for (int i_stations = 1; i_stations <= N; i_stations++){
            int stations = i_stations;
            int count;
            count++; //number of lines used to find equal station
            if (B[lines] == stations){
                //finds station equal to line
                break;
            }
        }   
   }
   for (int i_afterlines = 1+count; i_afterlines <= N-1; i_afterlines++){
       int afterlines = i_afterlines;
       if (B[afterlines] == stations){
          int second_count;
          second_count++; //counts number of total stations equal to station
       }    
   }
    
   if (second_count == N-1){
       printf("Station : %d", second_count); //If specified station is available to all except own, then answer
   }else{
       second_count = -1;   
   }
    
   //----------------------------------------
    FILE *Out =fopen("factory.out", "w");
    fprintf(Out,"%d\n",  second_count);
    fclose(Out);
}
    
