#include<stdio.h>

int main(void)
{
	int count = 0;
    int A, B, C;
    
    
	scanf("%d %d %d", &A, &B, &C);
    
    if(A>B) {
    	int temp = A;
        A = B;
        B = temp;
        }
        
    for(int i = A; i<=B; i++) {
    	if ((i%C) == 0) {
    	    count++;
    	}
        }
        
    printf("%d", count);
        
    return 0;
}