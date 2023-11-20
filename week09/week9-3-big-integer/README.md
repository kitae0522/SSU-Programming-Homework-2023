[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/W13OJlL-)
# Big Integer

C에서 기본 자료형으로 나타낼 수 있는 크기는 unsigned 일 경우 0부터 18446744073709551615 이고, signed 일 경우 -9223372036854775808부터 9223372036854775807 입니다.
이번 과제에서는 임의의 길이의 큰 정수를 입력 받아서 저장하고 덧셈, 뺄셈 및 곱셈 연산을 하는 함수들을 구현해주세요.

- 2개의 임의의 크기의 정수 a와 b를 입력 받으세요. (한 줄에 하나의 정수만 입력)
- 두 정수 a와 b에 대해 a + b, a - b, a * b를 각각 한 줄에 하나씩 순서대로 출력하세요.
- 외부 library의 사용없이 큰 수의 저장 및 연산을 처리해주세요.
- 각 연산을 하는 함수들의 이름과 호출 매개 변수는 자유롭게 정의해주세요.
- 별도의 c 파일을 생성하는 경우 makefile을 적절히 수정해주세요.

참고할 수 있는 구조체의 예시가 bigint.h에 정의되어 있습니다.
아래의 정의는 필요에 따라 변경하셔도 무방합니다.
```C
#define PLUS  1
#define MINUS -1

typedef struct {
  int digits;  // number of digits (i.e., length of num array)
  char *num;   // all digits as a string
  int sign;    // PLUS or MINUS
} BigInt;
```

## 입출력 예시
(입력 #1)
```
18446744073709551615
18446744073709551615
```
(출력 #1)
```
36893488147419103230
0
340282366920938463426481119284349108225
```
(입력 #2)
```
-18446744073709551615
-18446744073709551615
```
(출력 #2)
```
-36893488147419103230
0
340282366920938463426481119284349108225
```


## 채점 방법

다음의 명령어를 실행하여 채점을 진행합니다.

```Makefile
make clean all test
```

makefile의 내용이 올바르게 설정되어 있는지 확인해주세요.
