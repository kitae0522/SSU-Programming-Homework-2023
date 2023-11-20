[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/a1bytgA8)
# Polynomial Multiplication

두 다항식 f(x)와 g(x)의 계수들을 입력으로 받아서 두 다항식을 곱해서 나온 다항식의 계수들을 출력해주세요.
입력으로는 첫 줄에서 f(x)와 g(x)의 최고 차항의 차수 n과 m을 입력받고, 다음 줄에서는 f(x)의 각 항의 계수, 마지막 줄에서는 g(x)의 각 항의 계수를 입력받으세요.

- 입력의 한 행에서 각 항목은 공백으로 구분해주세요.
- 예시 구조체가 poly.h에 정의되어 있습니다. 참고하여 자유롭게 변형하셔도 좋습니다.
- 반드시 구조체를 활용하여 문제를 풀어주세요.
- 각 계수는 정수라고 가정합니다.

## 입출력 예시
(입력 #1)
```
2 2
2 3 8
6 7 3
```
(출력 #1)
```
12 32 75 65 24
```
(입력 #2)
```
3 2
2 3 -8 1
6 -7 3
```
(출력 #2)
```
12 4 -63 71 -31 3
```

## 채점 방법

다음의 명령어를 실행하여 채점을 진행합니다.

```Makefile
make clean all test
```

makefile의 내용이 올바르게 설정되어 있는지 확인해주세요.
