[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/xYmSl1sI)
# Pattern Counter

두 개의 문자열(str와 pat)을 입력 받아서 str 내에 pat 문자열이 몇 개 존재하는지 숫자를 출력하세요.
* 알파벳의 대소문자를 구분합니다.
* 영문 알파벳과 기호까지 입력받을 수 있다고 가정합니다.
* 최대 1000개의 character로 구성된 입력까지만 들어온다고 가정합니다.

아래의 입출력 예시를 참고하시기 바랍니다.

## 참고 사항

문자열을 입력받는 방법에 따라서 끝에 \n 혹은 \r\n이 포함될 수 있음에 유의하세요.
이 경우 적절하게 처리해주셔야 채점 결과가 올바르게 나옵니다.
(실습 서버에서 잘 돌아가는지의 여부가 아닌 Autograding에서 맞게 처리되었는지가 기준입니다.)

## 입출력 예시
(입력 #1)
```
Mathematician
ma
```
(출력 #1)
```
1
```

(입력 #2)
```
Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.
dolor
```
(출력 #2)
```
4
```

## 채점 방법

다음의 명령어를 실행하여 채점을 진행합니다.

```Makefile
make clean all test
```

makefile의 내용이 올바르게 설정되어 있는지 확인해주세요.
