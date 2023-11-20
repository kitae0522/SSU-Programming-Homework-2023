[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/C6aMwBx1)
# Parenthesis Matcher

주어진 괄호들의 짝이 맞는이 여부를 확인하여 TRUE 혹은 FALSE로 출력하세요.

- 괄호의 종류는 (), [], {}, <>의 네 가지입니다.
- 입력 중간에는 공백이 없습니다.
- 공백이 아닌 alpha numeric character(알파벳 혹은 숫자)는 괄호 사이에 들어갈 수 있습니다.
- 하나의 괄호가 끝나기 전에 다른 괄호가 닫히는 경우 또는 열리지 않은 괄호가 닫히는 경우를 FALSE로 처리합니다.

## 입출력 예시
(입력 #1)
```
sfjke(af90jbnmf)fenm{fea194bp}
```
(출력 #1)
```
TRUE
```
(입력 #2)
```
({)}
```
(출력 #2)
```
FALSE
```


## 채점 방법

다음의 명령어를 실행하여 채점을 진행합니다.

```Makefile
make clean all test
```

makefile의 내용이 올바르게 설정되어 있는지 확인해주세요.
