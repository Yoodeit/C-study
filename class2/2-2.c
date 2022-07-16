#include <stdio.h>
int main(){
    int array[7][7];

    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            array[i][j]=9;
        }
    }

    
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d", &array[i][j]);
        }
    }

    for(int i=0; i<5 ; i++){
        for(int j=0; j<5; j++){
            if(array[i][j]<array[i][j-1] && array[i][j]<array[i][j+1] && array[i][j]<array[i-1][j] && array[i][j]<array[i+1][j]){
                printf("* ");
            }
            else {
                printf("%d ", array[i][j]);
            }
        }
        printf("\n");
    }
return 0;
}