[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/-vJccIsk)
# Transpose Matrix

사용자로부터 행렬의 행(N)과 열(M)을 나타내는 자연수 N과 M을 공백으로 구분하여 입력받은 후, 줄 단위로 공백으로 구분된 각 행에 들어갈 원소의 값을 입력받으세요. 그 후 입력받은 행렬에 대해 전치(Transpose)를 수행한 행렬을 한 줄에 한 행씩 각 열을 공백으로 구분하여 출력하세요.

- 임의의 N과 M 값에 대해 동작할 수 있도록 동적 메모리 할당을 사용하세요.
- 각 원소의 값은 int 범위 내에 있는 정수로 입력받는다고 가정합니다.
- 전치연산을 수행하는 코드는 배열을 전달받아 연산하는 별도의 함수를 선언하여 처리하세요.
- 함수의 원형은 수업에서 배운 2차원 배열을 전달하는 방법 중 어떠한 형태를 사용해도 무방합니다.
- 전치 연산에 대한 자세한 설명은 다음의 링크를 참고하세요. (https://en.wikipedia.org/wiki/Transpose)

## 입출력 예시
(입력 #1)
```
2 2
1 2
3 4
```
(출력 #1)
```
1 3
2 4
```
(입력 #2)
```
3 2
1 2
3 4
5 6
```
(출력 #2)
```
1 3 5
2 4 6
```

## 채점 방법

다음의 명령어를 실행하여 채점을 진행합니다.

```Makefile
make clean all test
```

makefile의 내용이 올바르게 설정되어 있는지 확인해주세요.
