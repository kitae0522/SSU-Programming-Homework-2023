[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/3Yijc1Xp)
# Non-Adjacent Form

NAF는 Non-Adjacent Form의 약자로 이진 표현에서 사용되는 기법 중 하나입니다. 이 기법은 주로 큰 수를 다룰 때 곱셈과 관련된 연산을 더 효율적으로 수행하기 위해 사용됩니다.
NAF에서는 각 자릿수에 음수가 들어갈 수 있으며, 0이 아닌 bit들 사이에 최소 하나의 0인 bit가 존재합니다.
(0이 아닌 값들은 서로 인접하지 않는 표현 방법입니다.)
입력으로 10진수 숫자를 받아서 2진수 NAF로 출력하세요. 단 

- 출력할 때 각 자릿수 사이에 1칸을 띄워주세요.
- 음수의 경우 앞에 -를 붙여주세요.
- 입력은 양의 정수(10진수)만을 가정합니다.

## 입출력 예시
(입력 #1)
```
7
```
(출력 #1)
```
1 0 0 -1
```

## 채점 방법

다음의 명령어를 실행하여 채점을 진행합니다.

```Makefile
make clean all test
```

makefile의 내용이 올바르게 설정되어 있는지 확인해주세요.

