[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/6RE_edhX)
# Big Iterative Fibonacci

입력으로 0 이상의 정수를 받아서 N 번째 Fibonacci 수를 출력하세요.
(_주의!_ recursion(재귀호출)을 사용할 경우 시간 제한에 걸려서 오답처리 될 수 있습니다.)

_Hint_ 임의의 정수를 받기 때문에 앞서 구현한 Big Integer를 사용해야 합니다.

n번째 Fibonacci 수 f(n)의 정의는 다음과 같습니다.
- f(0) = 0
- f(1) = 1
- f(n) = f(n-1) + f(n-2)

## 참고 사항

- 재귀 호출의 경우 시간 제한에 못 맞출 수 있습니다.
- 계산 중 사용하는 변수의 자료형을 잘 설정하세요.

## 입출력 예시
(입력 #1)
```
6
```
(출력 #1)
```
8
```
(입력 #2)
```
100
```
(출력 #2)
```
354224848179261915075
```

## 채점 방법

다음의 명령어를 실행하여 채점을 진행합니다.

```Makefile
make clean all test
```

makefile의 내용이 올바르게 설정되어 있는지 확인해주세요.
