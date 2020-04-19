#include <stdio.h>

int main(int argc,char *argv[]){
    int N,M,i,j;

    scanf("%d %d",&N,&M);

    int matrix[N][M];

    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            
            if(matrix[i][j] == 42){
                if(i != 0){
                    if(matrix[i-1][j] != 7){
                        continue;
                    }
                }
                else{
                    continue;
                }
            
                if(i != N-1){
                    if(matrix[i+1][j] != 7){
                        continue;
                    }
                }
                else{
                    continue;
                }

                if(j != 0){
                    if(matrix[i][j-1] != 7){
                        continue;
                    }
                }
                else{
                    continue;
                }

                if(j != M-1){
                    if(matrix[i-1][j+1] != 7){
                        continue;
                    }
                }
                else{
                    continue;
                }

                if(matrix[i+1][j+1] != 7){
                    continue;
                }

                if(matrix[i+1][j-1] != 7){
                    continue;
                }

                if(matrix[i-1][j+1] != 7){
                    continue;
                }

                if(matrix[i-1][j-1] != 7){
                    continue;
                }
                

                printf("%d %d\n",i+1,j+1);
                return 0;
            }
        }
    }

    printf("0 0\n");

	return 0;
}