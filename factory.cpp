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

    for (int i_lines = 1; i_lines <= N-1; i_lines++){
        int lines = i_lines;
        for (int i_stations = 1; i_stations <= N; i_stations++){
            int stations = i_stations;
            if (B[lines] == stations){
                //for each of the values in array b as a possible station, find station w/ total of N-1
                int count = 0;
                count ++;g
            
            }
        
    }
