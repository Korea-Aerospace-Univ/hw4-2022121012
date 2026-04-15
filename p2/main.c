#include <stdio.h>

int main(void)
{
    int N, i = 0;                                // 입력될 문자의 개수 N과 for문에서 조건식에 사용할 i를 먼저 변수 선언 및 초기화를 해준다. 
    char ch;                                     // 문자를 입력받아야하기 때문에 char변수형을 사용하여 문자를 입력받는다.
    int letter_count = 0, number_count = 0;      // 문자가 얼만큼 연속되고 있는지를 카운팅 하기위한 변수로 letter_count를 선언하고, 숫자가 얼만큼 연속되고 있는지를 카운팅 하기위한 변수로 number_count를 선언한다. 
    int max_letter = 0, max_number = 0;          // 문자가 얼만큼 연속되고 있는지 中 최대로 얼만큼 연속되고 있는지를 저장하기 위한 변수 max_letter를 선언하고, 숫자가 얼만큼 연속되고 있는지 中 최대로 얼만믐 연속되고 있는지를 저장하기 위한 변수 max_number를 선언하였다. 

    scanf("%d", &N);                             // scanf를 이용해서 입력될 문자의 개수(N개)를 정하는 입력을 받는다. 

    for (i = 0; i < N; i++) {                    // for문을 이용해서 i(반복 횟수)가 N(입력 될 문자의 개수)보다 작으면 계속 반복하도록 조건을 설정하였고, i를 0으로 초기화하고, 반복횟수가 1만큼 늘었다는 것을 증감식으로 표현하였다. 
        scanf("%c", &ch);                        // 이 scanf를 이용해서 문자 및 숫자를 입력받는다. 

        if (ch >= 'a' && ch <= 'z') {            // 이번에는 문자 기준으로 입력받은 문자열을 볼 예정이다. 만약 입력받은 ch가 문자이면, 즉 'a'와 'z' 사이에 있으면 이라는 조건이다. 
            letter_count++;                      // 그에대한 행동으로 문자가 얼만큼 연속되고 있는지를 나타내는 lettr_count는 ++증가하고
            number_count = 0;                    // 숫자가 얼만큼 연속되고 있는지를 나타내는 number_count는 문자만 입력받는 경우로 조건을 설정하였기 떄문에 0이다. 를 나타내는 문장이다. 

            if (letter_count > max_letter)       // 그리고 문자에 대해 입력받은 ch에 문자가 연속된 횟수인 letter_count 보다 최대로 얼만큼 연속되고 있는지를 나타내는 max_letter보다 크면 이라는 조건이고
                max_letter = letter_count;       // 이 조건에 대해 참이면 max_letter를 letter_count로 갱신해준다. 
        }
        else if (ch >= '0' && ch <= '9') {       // 이번에는 숫자 기준으로 입력받은 문자열을 볼 예정이다. 만약 입력받은 ch가 숫자이면, 즉 '0' 과 '9' 사이에 있으면 이라는 조건이다. 
            number_count++;                      // 그에대한 행동으로 숫자가 얼만큼 연속되고 있는지를 나타내는 number_count는 ++증가하고, 
            letter_count = 0;                    // 문자가 얼만큼 연속되고 있는지를 나타내는 letter_count는 숫자만 입력받는 경우로 조건을 설정하였기 때문에 0이다. 를 나타내는 문장이다. 

            if (number_count > max_number)       // 그리고 숫자에 대해 입력받은 ch에 숫자가 연속된 횟수인 number_count 보다 최대로 얼만큼 연속되고 있는지를 나타내는 max_number보다 크면 이라는 조건이고, 
                max_number = number_count;       // 이 조건에 대해 참이면 max_number를 number_count로 갱신해준다. 
        }
        else {
            letter_count = 0;                    // if에 대해 문자(소문자)도 아니고, 숫자도 아니면 문자 및 숫자를 나타내는 변수인 letter_count 및 number_count는 연속되지도 않기 때문에 0이다. 를 나타내는 문장이다. 
            number_count = 0;
        }
    }

    printf("%d\n", max_letter);                  // 이후 for문의 조건인 N개 문자열을 입력 받아 for문을 탈출했다면 최대로 문자(영어 소문자)가 얼만큼 연속되었는지를 나타내는 max_letter값을 출력하여 나타낸다. 
    printf("%d\n", max_number);                  // 이후 for문의 조건인 N개 문자열을 입력 받아 for문을 탈출했다면 최대로 숫자가 얼만큼 연속되었는지를 나타내는 max_number값을 출력하여 나타낸다. 

    return 0;
}
