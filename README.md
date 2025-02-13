# **단어장 프로그램**

![캡처](https://user-images.githubusercontent.com/70681582/102381890-20901c80-400d-11eb-9c4e-9549c78baee1.PNG)

***
## **개요**
이 프로그램은 단어장 프로그램입니다. 사용자가 원하는 단어를 저장할수있습니다. 프로그램 종료시 자동으로 기록했던 단어들이 저장이 되고 나중에 다시 프로그램을 시작했을때 유지되게 됩니다.
단어장 프로그램의 기능으로는 원하는 단어를 단어의 뜻이나 spelling을 통해서 원하는 단어를 찾을 수 있습니다. 또한 사용자의 필요에 따라 단어를 추가하고 수정하고 지우는 기능도 가지고 있습니다. 이렇게 저장된 단어들을 사전순으로 정렬할 수 있는 기능이 있습니다. 프로그램의 모듈을 세부적으로 나누어 만들기때문에 추후에 부가적 기능을 추가하기 간편할것입니다.

## **목표 및 배경**
대학교 생활을 하면서 중국어,일본어,영어 강의를 듣게 되면 외워야할 단어들이나 숙어들이 많기때문에 그에 도움이 되는 프로그램을 만들어 보고 싶다는 생각을 했습니다.
일단 단어들을 저장할수있는 기본적인 형태의 단어장을 만드는것을 1차적인 목표로 삼고있습니다. 이것이 완성이 되면 추후 저장되어 있는 단어들을 테스트하는 기능 또한 추가할 예정입니다.
이러한 것들을 만들기 위한 저희의 계획은 조원끼리 이야기 중 조원 김현기가 win32API로 C언어 GUI구현이 가능하므로 조원 최낙현이 콘솔에서 실행가능한 단어장 프로그램을 만들어 주면 그에 맞추어 GUI를 구현하는 방식으로 진행하기로 하였습다.

## **진행할 내용**
이 단어장 프로젝트는  visual studio 프로그램을 이용하여 C언어를 통해 진행하게 됩니다. 먼저 간단히 단어장 프로그램에 들어갈 기능을 구현하는 알고리즘을 만들어서 테스트 해본후 win32 API를 통하여 graphical user interface(GUI)를 통해 입출력이 가능하도록 만들 예정입니다. 또한 프로그램을 만들때 모듈들을 세부적으로 나누어 만들 예정입니다.
조원 각각이 각자의 branch에서 자신의 코드를 만든후 master branch로 merge하면서 오류가 있는지 확인하며 진행할 예정입니다.

## **프로젝트에 참여하는 방법**
https://github.com/kim-hyeon-gi/wordBook/blob/master/CONTRIBUTING.md

## **주요 기능**
1. 단어 추가 및 저장
2. 단어 검색(단어의 뜻이나 spelling을 통해)
3. 단어 수정
4. 단어 삭제
5. 저장된 단어 사전순 정렬

## **팀원**
* 김현기 2017011885
* 최낙현 2017012542

## **역할 분담**
|김현기|최낙현|
|---|---|
|win32API 프로그램 설계도 제작|단어장 기능 구현 설계도 제작| 
|win32 API를 분석하여 팀원이 만든 알괴리즘을 GUI로 구현하는 코드 제작|단어장 알고리즘 코드 제작|
 

## **설계도**
* [단어장 기능 구현 설계도] : (https://github.com/kim-hyeon-gi/wordBook/blob/master/%EC%84%A4%EA%B3%84%EB%8F%84.PNG)
* [단어장 기본 GUI 구현 설계도] : (https://github.com/kim-hyeon-gi/wordBook/blob/hyeongi/WordBookForm%20%EC%84%A4%EA%B3%84%EB%8F%84.hwp)
* [단어장 찾기창 GUI 구현 설계도] : (https://github.com/kim-hyeon-gi/wordBook/blob/hyeongi/FindForm%20%EC%84%A4%EA%B3%84%EB%8F%84.hwp)
