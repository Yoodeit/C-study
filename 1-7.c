#include <stdio.h>

int main() {
    // Write C code here
    int start, end;
    scanf("%d %d", &start, &end);
    int count = 1;
    for (int i = start; i <= end; i++) {
        printf("%d ", i);
        if (count % 8 == 0){
            printf("\n");
            count++;
        }
        else {
            count++;
        }
    }
    
    
    return 0;
}