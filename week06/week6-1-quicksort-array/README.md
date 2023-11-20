[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/SMY0WZdG)
# Quicksort Array

사용자로부터 입력받을 숫자들의 수 N을 입력 받고, 다음 행에서 공백으로 구분된 N개의 숫자를 입력받아서 이를 ***내림차순***으로 정렬한 결과를 출력하세요.

- 임의의 N에 대해서 처리 가능하도록 동적 할당을 사용하세요.
- 입력받는 N개의 숫자들은 모두 int 의 범위 내에 존재한다고 가정합니다.
- 정렬할 때는 stdlib.h에 있는 qsort 함수를 활용하세요.
- qsort 함수는 주어진 배열을 ***오름차순***으로 정렬합니다.
- qsort 함수의 원형은 다음과 같습니다.
```C
void qsort( void *ptr, size_t count, size_t size, int (*comp)(const void *, const void *) );
```

위의 함수에서 각 인자들은 다음과 같습니다.
- ptr: 정렬할 array의 첫 번째 요소에 대한 주소(포인터)
- count: 정렬할 요소들의 개수(배열의 크기)
- size: 각 요소들의 크기(byte 단위 크기)
- comp: 2개의 요소들을 비교하는 함수를 가리키는 포인터

비교하는 함수 comp 의 경우 ***오름차순*** 정렬을 기준으로, 두 개의 인자로 받은 값에 대해 비교하여 다음과 같이 정수를 return해야 합니다.

- 첫 번째 요소가 두 번째 요소보다 작은 경우 음수를 반환
- 첫 번째 요소와 두 번째 요소가 같다면 0을 반환
- 첫 번째 요소가 두 번째 요소보다 크다면 양수를 반환

## 입출력 예시
(입력 #1)
```
5
97 23 100 38 15
```
(출력 #1)
```
100 97 38 23 15
```

## 주의 사항

- 본 과제의 정렬 순서는 ***내림차순***입니다.
- 비교하는 함수의 경우 void *로 자료를 전달받으므로 적절한 형 변환이 필요합니다.

## 채점 방법

다음의 명령어를 실행하여 채점을 진행합니다.

```Makefile
make clean all test
```

makefile의 내용이 올바르게 설정되어 있는지 확인해주세요.
