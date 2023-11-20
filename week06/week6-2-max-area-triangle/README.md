[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/9XEsWJst)
# Max Area Triangle

사용자로부터 3 이상의 자연수 N을 입력 받고, N개의 2차원 좌표(0 <= x, y <= 1000 인 정수)를 입력 받아서, N개의 좌표들 중 3개로 이룰 수 있는 가장 큰 삼각형의 면적을 구하세요. 이 때, 면적은 소숫점 아래 둘째 자리에서 반올림하여 소숫점 첫째 자리까지 출력하세요.

- 임의의 N에 대해 동작할 수 있도록 메모리 동적 할당을 활용하세요.

## 참고 사항
세 개의 좌표로부터 삼각형의 면적을 구할 때는 Shoelace formula를 사용할 수 있습니다.
각 좌표가 다음과 같을 때, $$(x_1, y_1), (x_2, y_2), (x_3, y_3)$$
면적은 다음과 같이 구할 수 있습니다.
$$area = | x_1y_2 + x_2y_3 + x_3y_1 - y_1x_2 - y_2x_3 - y_3x_1 | / 2$$

## 입출력 예시
(입력 #1)
```
6
2 0
4 0
6 2
4 4
2 4
0 2
```
(출력 #1)
```
8.0
```

## 채점 방법

다음의 명령어를 실행하여 채점을 진행합니다.

```Makefile
make clean all test
```

makefile의 내용이 올바르게 설정되어 있는지 확인해주세요.
