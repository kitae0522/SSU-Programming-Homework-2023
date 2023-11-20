[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/UJmZJlWh)
# Replace String

사용자로부터 한 행에 하나씩 세 개의 문자열 x, y, z를 입력받아서, x 문자열에 있는 모든 y 문자열을 z로 치환하세요.

- 문자열의 길이는 최대 1000 글자를 넘지 않는다고 가정합니다.
- 문자열 y의 길이는 z의 길이와 일치합니다.
- 모든 문자열은 공백(' ')을 포함할 수 있습니다.
- x와 z 문자열은 영어 대문자, 소문자를 포함할 수 있습니다.
- y 문자열은 영어 대문자, 소문자 외에 wildcard로 '?'를 포함할 수 있으며, 임의의 글자를 대신합니다.


## 입출력 예시
(입력 #1)
```
a a aa aaaa aa
a a
bcd
```
(출력 #1)
```
bcd abcdaabcda
```
(입력 #2)
```
abaaacaca
a?a
SSS
```
(출력 #2)
```
SSSaSSSca
```


## 채점 방법

다음의 명령어를 실행하여 채점을 진행합니다.

```Makefile
make clean all test
```

makefile의 내용이 올바르게 설정되어 있는지 확인해주세요.
