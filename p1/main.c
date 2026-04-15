#include <stdio.h>

int main(void)
{
    int answer, guess, count = 0;  // answer, guess, count를 변수 선언과 동시에 초기화 해준다. 

    scanf("%d", &answer);  // scanf를 이용해서 answer에 입력값을 받는다. 

    do {                                        // do ~ while문을 이용하라는 문제의 조건 이용
        scanf("%d", &guess);                    // scanf를 입력해서 guess에 입력값을 받는다. 
        count++;                                // guess에 입력값을 받았기 때문에 그 즉시 시도횟수가 1회 누적된 것을 표현하기 위해 바로 증감식을 써서 표현하였다. 
 
                                                // if문을 써서 조건을 여러가지로 나누었다.
        if (guess > answer)                     // 만약 추측(guess)한 값이 답(answer)보다 크면 printf로 guess값이 answer보다 크다는 표시인 >?를 출력할 수 있게 구현하였다. 
            printf("%d>?\n", guess);
        else if (guess < answer)                // else if 조건으로 만약 추측한 값(guess)이 답(answer)보다 작으면 printf로 guess값이 answer값보다 작다는 표시인 <?를 출력할 수 있게 구현하였다. 
            printf("%d<?\n", guess);
        else                                    // else 조건으로 추측한 값(guess)이 답(answer)보다 크지도, 작지도 않은, 즉 같다면 printf로 두 값이 같다는 표시인 ==를 출력할 수 있게 구현하였다. 
            printf("%d==?\n", guess);
 
    } while (guess != answer);                  // 반복문의 조건식으로 만약 guess값과 answer값이 다르면 계속 진행하고, 같다면 반복문을 빠져나오게끔 하기 위해 not을 붙여 조건식을 표현하였다. 

    printf("%d\n", count);                      // 반복문을 빠져나온 이후 얼만큼 반복했는지를 표현하기 위해 printf에 count변수를 넣어 몇번 시도 했는지 나타내었다. 
                                                // 반복문을 계속 실행할 수록 count에는 계속 숫자가 쌓이게끔 guess값을 입력받은 직후 바로 밑에 count 횟수가 증가하게끔 표현하였다. 
    return 0;
}
