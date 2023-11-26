[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/XQCrQP2k)
# Reverse Bits

사용자로부터 정수를 unsigned integer를 입력 받아서 32byte 내에 포함된 bit들을 역순으로 배열한 정수를 출력하세요.

예를 들어 200을 입력한 경우 이진수로 표현하면 다음과 같습니다.
```
0000 0000 0000 0000 0000 0000 1100 1000
```
이 경우, 순서를 역순으로 배치하면 결과는 다음과 같습니다.
```
0001 0011 0000 0000 0000 0000 0000 0000
```
따라서 이를 10진수로 표현한 318767104를 출력하게 됩니다.


## 입출력 예시
(입력 #1)
```
200
```
(출력 #1)
```
318767104
```


## 채점 방법

다음의 명령어를 실행하여 채점을 진행합니다.

```Makefile
make clean all test
```

makefile의 내용이 올바르게 설정되어 있는지 확인해주세요.
