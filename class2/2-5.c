#include <stdio.h>
int main(){
    int base[101][101] = {0}; //일단 색종이를 올려놓을 2차원배열을 선언하고 초기화해준다.
    int paper; //색종이 개수를 담을 변수
    int row, col, width, height; //색종이의 좌측하단 좌표의 행, 열, 색종이의 너비와 높이를 담을 변수

    scanf("%d", &paper); //맨 처음에는 몇 장의 색종이가 있는지를 받아서 paper 변수에 넣어줌.

    for (int i = 1; i<=paper; i++){ //국룰 i=0 i<paper를 쓰지 않는 이유는 특정 색종이 숫자를 표시해야 해서 그렇다.
        scanf("%d %d %d %d", &row, &col, &height, &width); //다음에는 이제 행, 열, 색종이 너비와 높이를 받음.
        for (int j=0; j<height; j++){ //색종이 번호를 그 색종이 영역만큼 표시하는 이중반복문
            for (int k=0; k<width; k++){
                base[row][col+k] = i; //일단 그 행에서 너비만큼 반복해서 특정 색종이 식별 숫자를 박아줌.
            }
            row++; //한 행 작업이 끝나면 다음 행.
        }
    }

    int papernum = 1; //이제 1번색종이 2번색종이 3번색종이 넓이를 하나씩 출력해야 하니까 papernum 변수 만듦
    int cnt = 0;
    while(papernum <= paper){ //전체 색종이개수랑 같아질때까지 while 반복문
        for (int i=0; i<101; i++){ //전체 배열 싹 훑으면서
            for (int j=0; j<101; j++){
                if (base[i][j] == papernum){ //1번 색종이 차례면 1이 써진 부분을 찾아서
                    cnt++; //넓이 count에 더한다.
                }
            }
        }
        printf("%d\n", cnt); //이제 넓이를 프린트하고
        papernum++; //다음 색종이 넓이를 세러 떠난다
        cnt = 0; //색종이 넓이값은 초기화
    }

    return 0;
}