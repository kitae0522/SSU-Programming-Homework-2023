[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/qC5ZaOsp)
# Poker Hands

사용자로부터 7장의 포커 카드 정보를 입력받은 후, 그 중에서 5장을 뽑아 만들 수 있는 가장 높은 무늬 서열이 무엇인지 출력하세요.
이번 과제에서 사용하는 무늬의 서열은 낮은 서열부터 오름차순으로 나타내면 다음과 같습니다.

- high card: 아래의 어떤 조합에도 해당되지 않는 경우
- one pair: 숫자가 같은 카드 2장
- two pair: 숫자가 같은 카드 2장으로 구성된 서로 다른 쌍이 2개
- three of a kind: 숫자가 같은 카드 3장
- straight: 숫자가 이어지는 카드 5장
- flush: 무늬가 같은 카드 5장
- full house: three of a kind와 pair가 동시에 존재
- four of a kind: 숫자가 같은 카드 4장
- straight flush: 숫자가 이어지고 무늬가 같은 카드 5장

위의 리스트에 대한 예시는 다음의 페이지를 참고하세요. (https://en.wikipedia.org/wiki/List_of_poker_hands)

카드의 숫자(rank)는 1부터 13까지 가질 수 있으며, 무늬(suit)는 스페이드(s), 하트(h), 다이아몬드(d), 클럽(c)의 4종류 중 하나로 총 52장의 카드가 존재합니다.
카드는 아래의 양식에 따라 입력 받습니다.

- 하나의 카드는 무늬와 숫자를 공백으로 구분하여 표시합니다. (예시: d 11)
- 한 줄에 모든 카드를 입력받으며, 각 카드는 쉼표(,)로 구분됩니다.
- straight와 straight flush는 [1,2,3,4,5], [2,3,4,5,6]부터 최대 [9,10,11,12,13]까지만 고려합니다. (13 이후에 1이 오는 straight는 고려하지 않습니다.)
- 출력은 서열의 명칭을 영문 소문자로 출력합니다. (예시: four of a kind)
- 두 가지 이상의 서열 조합이 존재하는 경우 더 높은 서열만 출력합니다.

카드 정보의 저장시에는 다음과 같은 구조체를 활용하세요.
```C
typedef struct {
  char suit;
  int rank;
} CARD;
```
suit에는 무늬, rank에는 숫자가 저장됩니다.

## 입출력 예시
(입력 #1)
```
d 13,c 8,d 12,s 7,s 4,h 3,c 9
```
(출력 #1)
```
high card
```
(입력 #2)
```
c 11,c 8,c 10,c 7,h 4,d 5,c 9
```
(출력 #2)
```
straight flush
```


## 채점 방법

다음의 명령어를 실행하여 채점을 진행합니다.

```Makefile
make clean all test
```

makefile의 내용이 올바르게 설정되어 있는지 확인해주세요.
