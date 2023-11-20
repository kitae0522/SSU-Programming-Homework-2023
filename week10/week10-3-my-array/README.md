[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/FaGuNJRq)
# My Array

Python과 같은 script 언어에서는 list안에 또다른 list가 들어갈 수 있습니다.
C 언어에서 문자열과 배열 내에 문자열로 구성된 또 다른 배열을 모두 저장할 수 있는 배열을 만들어 주세요.
첫 번째 사용자의 입력으로 배열에 들어갈 값들을 한 줄로 입력받고, 다음 줄에서는 특정 위치의 원소를 접근하는 문자열을 입력받아 해당 위치의 원소를 출력합니다.

- 문자열의 길이는 최대 20글자를 넘지 않는다고 가정합니다.
- 배열에 들어갈 수 있는 것은 다음의 두 가지로 한정합니다: (1) 문자열 (2) 문자열만 들어갈 수 있는 또 다른 배열
- 문자열은 1글자 이상의 알파벳 대소문자로 이루어져 있다고 가정합니다.
- 특정 위치의 원소를 접근했을 때, 그 원소가 문자열이라면 문자열을 그대로 출력합니다.
- 특정 위치의 원소를 접근했을 때, 그 원소가 배열이라면 안에 있는 원소들을 대괄호로 묶고, 쉼표와 공백으로 구분하여 출력합니다.
- 특정 위치의 원소가 배열일 때는, n차원 배열에 접근하는 것처럼 arr[i][j][k].. 등의 꼴로 배열 내의 원소들을 반복적으로 접근하여 출력할 수 있습니다.
- 접근 시에 에러가 발생할 수 있는 입력은 없다고 가정합니다.


## 입출력 예시
(입력 #1)
```
[Lorem, ipsum, dolor, [sit, amet], vis, antiopan]
arr[3]
```
(출력 #1)
```
[sit, amet]
```
(입력 #2)
```
[Lorem, ipsum, dolor, [sit, amet], vis, antiopan]
arr
```
(출력 #2)
```
[Lorem, ipsum, dolor, [sit, amet], vis, antiopan]
```
(입력 #3)
```
[Lorem, ipsum, dolor, [sit, amet], vis, antiopan]
arr[3][1]
```
(출력 #3)
```
amet
```

## 채점 방법

다음의 명령어를 실행하여 채점을 진행합니다.

```Makefile
make clean all test
```

makefile의 내용이 올바르게 설정되어 있는지 확인해주세요.
