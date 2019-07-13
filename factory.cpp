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
