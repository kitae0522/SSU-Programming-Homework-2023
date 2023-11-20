[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/ag_BGZSM)
# Levenshtein distance
Levenshtein distance는 2개의 문자열이 있을 때, 몇 번의 추가/삭제/치환을 해야 서로 같아지는지를 나타냅니다.
예를 들어 kitten과 sitting은 다음과 같은 과정을 거치게 되므로 3의 distance를 갖습니다.
```
kitten >> sitten >> sittin >> sitting
```
사용자로부터 2개의 문자열을 한 줄에 하나씩 입력받아 distance를 출력해주세요.

- 입력에 공백(whitespace)는 없다고 가정합니다.
- 입력으로는 영어 소문자 알파벳만 들어온다고 가정합니다.


## 입출력 예시
(입력 #1)
```
intention
execution
```
(출력 #1)
```
5
```


## 채점 방법

다음의 명령어를 실행하여 채점을 진행합니다.

```Makefile
make clean all test
```

makefile의 내용이 올바르게 설정되어 있는지 확인해주세요.
