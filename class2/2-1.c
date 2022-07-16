#include <stdio.h>
int main() {
    int array[9][9];
    int max = 0;
    int r =0;
    int c =0;
    
    for(int i=0; i<9; i++){
        for (int j=0; j<9; j++){
            scanf("%d", &array[i][j]);
            if (max<array[i][j]){
                max = array[i][j];
                r = i+1;
                c = j+1;
                
            }
        }
    }
    printf("%d \n", max);
    printf("%d %d", r, c);
    
    return 0;
}


