[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/jtaI-EH4)
# Matrix Multiplication

입력으로 행렬의 크기 N (N <= 20)을 입력 받은 후, 2개의 N x N 행렬을 입력받아서 두 행렬을 곱한 결과를 출력하세요.

- 행렬의 입력과 출력은 행 단위로 해주세요.
- 행렬의 곱셈 방법은 https://ko.wikipedia.org/wiki/%ED%96%89%EB%A0%AC_%EA%B3%B1%EC%85%88 링크를 참고하세요.
- 행렬 저장 시 malloc을 사용하여 동적으로 memory를 할당해주세요.
- 입력 행렬의 각 성분은 int 범위를 벗어나지 않는다고 가정합니다.
- 출력 역시 int의 범위를 벗어나지 않는다고 가정합니다.

## 입출력 예시
(입력 #1)
```
3
1 2 3
4 5 6
7 8 9
1 2 3
4 5 6
7 8 9
```
(출력 #1)
```
30 36 42
66 81 96
102 126 150
```

## 채점 방법

다음의 명령어를 실행하여 채점을 진행합니다.

```Makefile
make clean all test
```

makefile의 내용이 올바르게 설정되어 있는지 확인해주세요.
