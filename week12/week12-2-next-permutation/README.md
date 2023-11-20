[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/HAlHKu5s)
# Next Permutation

Permutation은 서로 다른 n개의 값들을 순서를 고려하여 나열하는 것을 의미한다. 예를 들어 (1,2,3) 3개의 숫자로 만들 수 있는 permutation들은 다음과 같다.
```
(1,2,3), (1,3,2), (2,1,3), (2,3,1), (3,1,2), (3,2,1)
```
사용자로부터 서로 다른 음이 아닌 정수들을 쉼표로 구분하여 입력 받아서, 해당 숫자들로 만들 수 있는 permutation들을 오름차순으로 정렬했을 때 입력한 숫자들의 순서 바로 뒤에 오는 permutation을 출력하세요.

- 입력 받는 음이 아닌 정수들의 수는 최대 100개 이하라고 가정합니다.
- 입력하는 숫자들의 범위는 0 이상 100 이하입니다.
- 출력의 경우에도 쉼표로 구분해주세요.
- 입력 받은 것이 가장 뒤에 있는 permutation인 경우, 가장 처음에 오는 permutation을 출력하세요.


## 입출력 예시
(입력 #1)
```
2,1,3
```
(출력 #1)
```
2,3,1
```
(입력 #2)
```
3,2,1
```
(출력 #2)
```
1,2,3
```


## 채점 방법

다음의 명령어를 실행하여 채점을 진행합니다.

```Makefile
make clean all test
```

makefile의 내용이 올바르게 설정되어 있는지 확인해주세요.
