[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/YimPE0LY)
# LED Sign

ASCII table에 포함된 문자열들로 구성된 문장을 입력받아서, 글자들이 왼쪽으로 한 글자씩 흘러가는 LED 전광판처럼 출력해주세요.

- 첫 행에는 입력받은 문자열을 그대로 출력한 후, 다음 줄 부터는 한 줄에 한 글자씩 왼쪽으로 움직인 결과를 출력하세요.
- 원래 입력 받은 문자열이 출력되기 직전까지만 출력하세요.
- 문자열의 첫 칸 혹은 마지막 칸의 공백도 누락되지 않고 출력되도록 주의하세요.
- 입력 받은 문자열의 길이는 최대 1000글자를 넘지 않는다고 가정합니다.

## 입출력 예시
(입력 #1)
```
C Programming language
```
(출력 #1)
```
C Programming language
 Programming languageC
Programming languageC 
rogramming languageC P
ogramming languageC Pr
gramming languageC Pro
ramming languageC Prog
amming languageC Progr
mming languageC Progra
ming languageC Program
ing languageC Programm
ng languageC Programmi
g languageC Programmin
 languageC Programming
languageC Programming 
anguageC Programming l
nguageC Programming la
guageC Programming lan
uageC Programming lang
ageC Programming langu
geC Programming langua
eC Programming languag
```

## 채점 방법

다음의 명령어를 실행하여 채점을 진행합니다.

```Makefile
make clean all test
```

makefile의 내용이 올바르게 설정되어 있는지 확인해주세요.
