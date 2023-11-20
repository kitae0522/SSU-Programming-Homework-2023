[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/ld_DebxG)
# Rotate Array

사용자로부터 3 이상의 자연수 N을 입력받고, 두 번째 줄에서는 공백으로 구분된 N개의 정수(int 범위 내)를 입력 받은 후, 세 번째 줄에서는 시작 index(S), 끝 index(E), 왼쪽 방향으로 회전할 횟수(D)을 공백으로 구분하여 입력받아 S부터 E까지의 원소를 D번 회전한 결과를 공백으로 구분하여 한 줄로 출력하세요.

- 왼쪽 방향의 회전은 각 배열의 원소가 D개만큼 왼쪽으로 이동하되, 시작 index보다 왼쪽으로 넘어갈 경우 끝 index로 이동합니다.
- 회전하는 코드는 배열을 전달받아서 처리하도록 다음과 같은 함수 원형을 사용하여 구현하세요.
```C
void rotate(int a[], int s, int e, int d)
```
- 입력받는 S와 E는 N개의 원소로 구성된 배열의 index를 벗어나지 않는다고 가정합니다.

## 입출력 예시
(입력 #1)
```
11
0 1 2 3 4 5 6 7 8 9 10
2 5 2
```
(출력 #1)
```
0 1 4 5 2 3 6 7 8 9 10
```


## 채점 방법

다음의 명령어를 실행하여 채점을 진행합니다.

```Makefile
make clean all test
```

makefile의 내용이 올바르게 설정되어 있는지 확인해주세요.
