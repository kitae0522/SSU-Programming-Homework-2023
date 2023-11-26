[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/7X5GYT8m)
# RPN calculator

Reverse Polish Notation(RPN)으로 표기된 수식을 계산한 결과를 출력해주세요.

RPN은 후위 표기법(postfix notation)으로 불리기도 하며, 연산자를 연산 대상의 뒤에 쓰는 연산 표기법입니다.
예를 들어, 1 + 2의 경우 1 2 +와 같이 표기되며, 괄호가 들어간 (2 + 3) * 4의 경우 2 3 + 4 *와 같이 표기됩니다.

이러한 방식은 수식을 계산할 때 특별한 변환이 필요 없기 때문에 스택을 활용하여 계산하기가 용이합니다.

이번 과제에서는 입력으로 받은 RPN으로 표기된 수식의 연산 결과를 출력해주세요.

- 숫자는 양수만 들어간다고 가정합니다.
- 올바르지 않은 입력은 들어오지 않는다고 가정합니다

## 입출력 예시
(입력 #1)
```
3 4 *
```
(출력 #1)
```
12
```


## 채점 방법

다음의 명령어를 실행하여 채점을 진행합니다.

```Makefile
make clean all test
```

makefile의 내용이 올바르게 설정되어 있는지 확인해주세요.
