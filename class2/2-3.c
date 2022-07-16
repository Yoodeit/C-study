#include <stdio.h>
int main() {
    int num;
    int array[1000][5];
    int score[1000];
    int max;

    scanf("%d", &num);

    for(int i=0; i<num; i++){
        for(int j=0; j<5; j++){
            scanf("%d", &array[i][j]);
        }
    }
/*
    for(int i=0; i<num; i++){
        for(int j=0; j<5; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    */
    //k번학생의 점수계산을 시작하겠습니다.
    for(int k=0; k<num; k++){
        int tscore[num];
        for(int j=0; j<5; j++){ //j가 1학년 2학년 3학년 4학년 5학년
            int temp;
            temp = array[k][j]; //점수계산을 진행중인 그 학생이 몇 반이었는지를 보여주는 기준값
            for (int i=0; i<num; i++){ //i가 1번, 2번, 3번, 4번, 5번학생
                if (i==k){
                    continue;
                }
                else if(array[i][j]==temp){ //여기서 j, 그러니까 학년은 고정이고 학생만 바뀜,
                    tscore[i]= tscore[i]+1; //그럼 이 코드에서 특정 번호의 학생에게 +1점이 생길 것임.
                    
                }
            }

        }//한 학생을 1, 2, 3, 4, 5학년까지 다 조지고
        for( int i=0; i<num; i++){
            int temp;
            temp = num;

            if(i==k){
                continue;
            }
            else{
                if (tscore[i]==0){
                    score[i] = temp-1;

                }
            }
        }
        for( int i=0; i<num; i++){
            tscore[i]=0;
        }

    }
    max = score[0];
    for (int i=1; i<num; i++){
        if(max<score[i]){
            max = score[i];
        }
    }
    printf("%d", max);

    




return 0; 
}


