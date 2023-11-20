[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/q1IRI2pg)
# Finding Max Area

석유 회사에서 최대한의 석유 매장량을 가진 곳을 찾아 시추하고자 합니다. (이 때, 탐색 영역은 정사각형 형태로 가정합니다.)
사용자로부터 전체 영역의 크기 N(4<=N<=100)을 입력받고, 각 행별로 공백(space)으로 구분된 N개의 매장량 P(0<=P<=10000)를 입력 받아서, 3x3 구역 내에 매장량이 가장 많은 구역을 찾아 그 구역의 매장량을 출력하세요.


## 입출력 예시
(입력 #1)
```
6
2 2 3 3 5 2
1 2 3 3 5 2
2 2 3 3 5 2
1 3 3 0 0 0
1 1 3 0 1 0
2 2 3 0 0 0
```
(출력 #1)
```
33
```

## 채점 방법

다음의 명령어를 실행하여 채점을 진행합니다.

```Makefile
make clean all test
```

makefile의 내용이 올바르게 설정되어 있는지 확인해주세요.
