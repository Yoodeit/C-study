#include <stdio.h>
 
int main() {
 
  int n; //뒤집을 횟수 N을 담을 변수
  scanf("%d", &n); //뒤집을 횟수 N을 입력받아 n에 담는다.
  
  int a,b,c; //반복문에서 사용될 변수 a b c
  
  int map[10][10]; //2차원배열로 맵을 설정합니다.
  
  for(int i=0; i<10; i++){ //이제 이중반복문으로 맵을 모두 0으로 설정합니다.
    for(int j=0; j<10; j++){
      map[i][j] = 0;
    }
  }
  
  for(c=0; c<n; c++){ //c번째 열과 행을 뒤집으라고
    for(a=0; a<10; a++){ //열이 c인 애들이 1이면 0, 0이면 1
      if(map[a][c] == 1){
        map[a][c] = 0; 
      }else{
        map[a][c] = 1;
        }
    }
    for(b=0; b<10; b++){ //행이 c인 애들이 1이면 0, 0이면 1
      if(map[c][b] == 1){
        map[c][b] = 0;
      }else{
        map[c][b] = 1;
      }
    }
    if(map[c][c]==1){ //행, 열이 다 c인 애들은 1이면 0, 0이면 1(두번뒤집혀서 안바뀌었기 때문)
      map[c][c]=0;
    }else{
      map[c][c]=1;
    }
    
  }
 
  

  for(int i=0; i<10; i++){ //이제 쭉 출력해주면 됨.
    for(int j=0; j<10; j++){
      printf("%d ", map[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
