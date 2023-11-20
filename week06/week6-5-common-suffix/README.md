[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/ISjemtTM)
# Common Suffix
사용자로부터 2개의 문자열(최대 1000글자)을 입력받아서 가장 긴 공통 suffix를 찾아 ***영문 소문자***로 출력하세요.

- 입력 문자열은 ASCII table에 있는 문자들로 구성된 것으로 한정합니다. (영문 대/소문자, 문장부호, 공백)
- 문자열에 포함된 공백이나 문장부호는 무시하고 영문 대/소문자로만 구성된 가장 긴 공통 suffix를 찾으세요.
- 대/소문자의 차이는 무시합니다. (ex. A와 a는 같은 문자로 처리합니다.)
- 공통 suffix가 없을 경우 빈 문자열을 출력하세요.

## 입출력 예시
(입력 #1)
```
procrastination
destination
```
(출력 #1)
```
stination
```
(입력 #2)
```
gloves
dove
```
(출력 #2)
```

```


## 채점 방법

다음의 명령어를 실행하여 채점을 진행합니다.

```Makefile
make clean all test
```

makefile의 내용이 올바르게 설정되어 있는지 확인해주세요.
