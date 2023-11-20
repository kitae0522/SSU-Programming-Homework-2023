[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/SvdnezaW)
# Anagram

Anagram은 단어나 문장을 구성하고 있는 문자의 순서를 바꾸어 다른 단어나 문장을 만드는 것입니다. (예시: heart <=> earth / I am Lord Voldemort <=> Tom Marvolo Riddle)
사용자로부터 문자열을 입력받아서 주어진 사전 내에서 anagram을 이루는 단어가 있는지 확인하여 출력하세요.

- 사전은 repository에 주어진 american-english-large.txt 파일을 읽어서 사용하세요.
- 입력으로는 영문 대소문자로 구성된 한 단어만 들어온다고 가정합니다. (특수문자 및 공백 입력은 없습니다.)
- 매칭 시에 대소문자는 무시하고 처리하세요.
- 사전에서 anagram을 이루는 __첫 번째 단어만__ 모두 __소문자로__ 출력하세요.
- Anagram을 이루는 단어가 없을 경우 -1을 출력해주세요.


## 입출력 예시
(입력 #1)
```
ahalaaicpp
```
(출력 #1)
```
appalachia
```
(입력 #2)
```
gajae
```
(출력 #2)
```
-1
```

## 채점 방법

다음의 명령어를 실행하여 채점을 진행합니다.

```Makefile
make clean all test
```

makefile의 내용이 올바르게 설정되어 있는지 확인해주세요.
