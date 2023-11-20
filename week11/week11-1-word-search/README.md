[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/VHGhP7Iz)
# Word Search

사용자로부터 단어를 입력받아서 해당 단어가 주어진 파일 내에 존재하는지 확인하여, 그 위치를 출력하세요.

- 대소문자는 구분하지 않습니다.
- 알파벳으로만 구성된 파일들의 예시는 input01.txt, input02.txt, input03.txt에서 확인할 수 있습니다.
- 사용자가 입력한 단어를 주어진 문서에서 찾아주되, 첫 줄에서 첫 글자의 위치, 두 번째 줄에는 마지막 글자의 위치를 출력하세요.
- 위치를 출력할 때의 기준은 2차원 배열에서의 index로 상정합니다.
- 예를 들어 아래의 예제에서 CBA를 검색할 경우에는 시작 위치의 index는 0,2, 끝 위치는 0,0이 됩니다.
```
ABCD
BCDA
FDAB
EABG
```
- 위치 출력 시의 각 차원의 값은 쉼표(,)로 구분해주세요.
- 해당 단어가 여러 개 존재할 경우 2차원 행렬 기준으로 행이 가장 0에 가까운 것부터 열이 가장 0에 가까운 것을 찾아서 하나만 출력하세요.
- 단어 내에 포함된 글자 사이의 연결관계는 상/하/좌/우이며, 대각선 방향으로도 연결될 수 있습니다.
- 단, 연결 방향은 탐색 도중에 바뀌지 않습니다.
- 찾는 단어가 파일 내에 존재하지 않을 경우 -1, -1을 출력하세요.


## 입출력 예시
아래 예시에서는 make clean all test1로 input01.txt 라는 파일명을 명령행 인자로 전달받아 내용을 읽었다고 가정합니다.

(입력 #1)
```
parallel
```
(출력 #1)
```
0,3
0,10
```


## 채점 방법

**(주의!)** 다음의 명령어들 중 하나를 실행하여 채점을 진행합니다.

```Makefile
make clean all test1
```
```Makefile
make clean all test2
```
```Makefile
make clean all test3
```

각 test 조건에서는 서로 다른 입력 파일명을 명령행 인자로 전달합니다.
makefile의 내용이 올바르게 설정되어 있는지 확인해주세요.
