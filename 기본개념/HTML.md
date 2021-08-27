<br>

# HTML5의 시작과 개념

목적 :<br>
1. 모든 브라우저에서 웹 페이지가 동일하게 보이는 것
2. 모든 기기에서 웹 페이지가 유통적으로 보일 수 있는 것
3. 누구나가 어떤 환경상황에서나 평등하게 보일 수 있는 것

TAG ( <태그명령어> )<br>
ex) <html>, <head>, <body>...<br>
-> 태그 작성시 밖에서 안으로 쓰는 습관 가지기!<br>
```
<!DOCTYPE html> // 지금 사용하는 문서 타입은 html 형식을 사용
<html lang="en"> // html 문서의 시작을 알리며, lang 속성을 사용해 문서에서 사용할 언어를 지정
<head> // 문서 서두에 해당, css를 비롯한 자바스크립트, 외부 페이지 연결 등의 구성을 하는 부분
    <meta charset="UTF-8"> // 언어 캐릭터셋
    <title></title> // 브라우저 탭 또는 즐겨찾기에 표시되는 제목 영역
</head>
<body></body> // 실제 브라우저 화면에 표시되는 영역
</html>
```
```
휴먼랭귀지
한국(Korean) : ko
영어(English) : en
일본(Japan) : ja
중국(China) : zh
```
```
언어 캐릭터셋 = html로 저장된 파일 내부에는 태그를 포함한 텍스트 등의 콘텐츠
- utf-8(유니코드)
   전 세계의 모든 문자를 표현할 수 있는 인코딩(웹 표준 지원)
- euc-kr
   한글, 한국에서 통용되는 한자, 영문으로 제한된 인코딩
```

* 메타 데이터 콘텐츠
	= 문서의 표현이나 동작설명, 다른 문서와의 관계 설정 후 다른 문서에 정보를 전달
* 플로우 콘텐츠
	= 문서나 애플리케이션의 본문 안에서 사용
* 구획 콘텐츠
	= heading content와 footer를 정의
* 제목 콘텐츠
	= sectioning content의 header를 정의
* 구문 콘텐츠
	= 텍스트와 텍스트가 포함된 마크업을 정의
* 인터렉티브 콘텐츠
	= 사용자와의 상호작용을 위해 사용
* 임베디드 콘텐츠
	= 다른 리소스나 콘텐츠를 문서에 삽입
	
<br>

**주의사항**
1. 문서, 폴더, 파일, 선택자 만들때
> 1 영문작성
2 대소문자 구분
3 한글사용 X
4 띄어쓰기 X
5 특수문자( -, _ 만)
6 영문뒤에 숫자사용~(추천)
2. 태그 작성할때
> 7 <태그></태그>를 만들고 내용

<br>
<br>
<br>

# 텍스트 관련 태그 1

블럭형태의 글자 태그<br>
 -> 박스처럼 작성한 순서대로 위에서 아래로 쌓이는 형태<br>

1. h1~h6<br>
   숫자가 커질수록 글자크기는 줄어든다, 타이틀에 사용, 볼드체<br>
2. P<br>
    단락, 본문에서 단락을 구분하거나 나타낼때 사용, 주로 글자를 담아서 표현<br>
3. br<br>
   줄바꿈<br>
4. hr<br>
   수평줄을 나타낸다, 단락의 구분 주제가 바뀔 때 사용, 입체적<br>
5. blockquote<br>
   긴 인용문을 나타낼 때 사용하는 태그, 들여쓰기<br>
6. pre<br>
   공백이나 줄바꿈등이 그대로 표현<br>

<br>
<br>
<br>

# 텍스트 관련 태그 2
	
글자 꾸미기<br>
- 볼드체(strong,b) : strong은 경고 주의사항 강,b<br>
	
- 이태릭체(em,i) : em은 강조하고 싶은 부분 저자의 생각, i<br>
	
- 인용표현(q,blockquote) : q(짧은부분의 인용표현, 따옴표가 나타냄), blockquote(긴 인용문, 박스생성)<br>
	
- 형광펜 효과 : mark<br>
	
- 스타일의 선택자와 사용 : span<br>
	
- 동아시아 글자(ruby,rp) : ruby, rp(ruby 태그 안에 rt혹은 rp요소를 함께 포함하여 사용)<br>
	
- 취소선 : del<br>
	
- 밑줄 : ins<br>
	
- 첨자(sup,sub): sup (위첨자), sub (아래첨자)<br>

특수문자
- 엔티티(entity) : html에서 예약된 문자, 16진수의 엔티티 숫자<br>
	ex) < = &lt; = &#60; || > = &gt; = &#62;
   
<br>
<br>
<br>

# 이미지 태그와 하이퍼링크
  1. img<br>
< img src = "  " //art= "  "><br>
 ->문서 옆에 있을때는 바로 부르기<br>
 ->art : 주석문, 이미지가 안보일 때를 대비한 대체문자, html5기본 규칙!<br><br>
 = 이미지를 나타냄, 단독태그, 글자와 같이 취급<br>
    경로>>폴더안>> (작성하는 문서의 기점으로 부터)<br>
```
이미지의 확장자(대표)
1. JPG
   가장 대표적인 이미지 표현방식
   이미지의 색상을 가장 잘 표현
2. PNG
   이미지의 색상을 유지하며 투명한 배경을 나타낼 수 있는 확장자
3. GIF
   투명한 배경이 가능
   색상이 256개의 표현만 가능 -> 화질이 떨어져 보임
```
figure<br>
->이미지, 사진, 삽화같은 콘텐츠를 넣을 때 사용<br><br>
figcaption<br>
->figure요소에 캡션을 넣을 때 사용하는 태그로 figure안에서 사용, 제일 처음이나 마지막에 배치<br><br>

2. a<br>
<a herf = "이동할 페이지 또는 url" 속성></a><br>
= 글자와 같이 나열되는 성격, 링크연결 시 기본 스타일(글자색, 밑줄, 손모양커서), 브라우저내에서 바로 전환<br>
* 인터넷 주소, url
    http:// (**필수!**)
* 임시 링크, #
*  메일(mailto), 전화(tel), 문자(sms)
* 새창 전환, targer, _self, _blank
    target : 링크된 문서를 클릭했을 때 문서가 열릴 위치 지정<br>
    _self : 기본값 -> 현재의 브라우저에서 전환<br>
    _blank : 새장전환 / 새로운 도메인창을 열 때<br>
* 다른 페이지로 이동

<br>
<br>
<br>

# CSS기초(스타일과 선택자)

선택자 { 속성 : 값 ; } = selector { property : value ; }<br>
- 외부스타일시트 : 외부에 작성된, CSS 문서 즉 스타일 시트 파일을 연결<br>
- 내부스타일시트 : style태그를 사용하여 html문서에 바로 적용<br>
- 인라인스타일 : -<br>
```
style
- style 안에 작성하는 주석방법 -> /*  */
1. padding: = 안쪽여백
2. margin: = 바깥여백
3. color: = 글자색
```
1. 전체선택자<br>
   html내에 등장하는 모든 형태를 선택하는 선택자(초기화, 기본설정값)<br>
2. 태그선택자<br>
   html 내에 등장하는 특정한 태그를 선택하는 선택자<br>
3. 아이디선택자<br>
   html화면 내에서 하나의 이름으로 한번만 사용가능한 선택자<br>
4. 클래스선택자<br>
   html화면 내에서 하나의 이름으로 여러번 사용가능한 선택자

<br>
<br>
<br>

# CSS기초(속성의 종류)

1.  글자관련<br>
   	1. 글자색상<br>
 	    .text -> 단어, hex (드래그> ctlrl+e> 색상선택 > esc)<br>
	2 글자크기 <br>
	   font-size -> - px, em, pt...<br>
	3. 글자굵기<br>
  	   font-weight -> 100 ~ 900(100 ~ 300가늘게),(400 ~ 600중간),(700 ~ 900굵게)<br>
	4. 줄간격<br>
  	   line-height -> px, em, pt, %... (단위)<br>
	5. 글꼴<br>
	   font-family -> 내 컴퓨터에 저장된 글자가 표현(웹폰트는 예외)<br>
	6. 글자스타일<br>
 	   font-style -> litalic, normal...<br>
	7. 자간<br>
  	   letter-spacing -> 숫자입력(px, %...)<br>
	8. 문단정렬<br>
   	   text-align -> left, right, center<br>
2. 배경관련<br>
	1. 배경색상<br>
	   background-color<br>
	2. 배경이미지<br>
	   background-image -> url이미지 경로, 반복되는 성격, 공간이 있는 상태에서 나타남<br>
	   background-repeat -> 반복되지 않는 원본 한장<br>
	   repeat-x ->가로반복<br>
	   repeat-y ->세로반복<br>
	3. 크기<br>
	   background-size -> X px(가로폭) Y px(가로폭), %값<br>

<br>
<br>

# 공간 분할 태그

DIV<br>
1. 박스의 성격<br>
- block : 박스와 같은 성격, 화면 전체를 사용한다.<br>
- inline : 글자와 같은 성격, 내용의 폭값, 화면의 일부를 차지한다.<br>

2. 크기<br>
- width: = 넓이, 가로폭 ( px, %, auto )<br>
- height = 높이, 세로폭 ( px, %, auto )<br>

3. 윤곽선<br>
ex) border: 5px solid #000;<br>
- border: -> 선<br>
- 5px -> 선의 굵기<br>
- solid -> 선 스타일<br>
- #000 -> 선의 색상 (검정)<br>

4. 여백<br>
- padding -> 안쪽으로 내용과 박스 사이의 틈<br>
- margin -> 바깥으로 박스 혹은 다른 요소와의 틈<br>

<br>
<br>

# 공간 분활을 위한 스타일

- 박스모델<br>

	+ %<br>부모기준에 따른 양으로 표현<br>추가되는 요소를 포함 X<br> 넘치게 만들 수도 있다.<br>
	+ auto <br> 부모기준으로 꽉차게 표현<br>추가되는 요소를 함께 가져간다<br> 폭값을 유지<br>
	+ padding <br> 두자리(상하, 좌우) <br>네자리(top > right > bottom > left)<br>
	+ padding-"  " <br> 개별부여가능<br> margin 옵션과 동일<br>
	+ margin<br> 두자리, 네자리, 개별부여 가능<br>( 숫자값 auto-박스 ) : block요소의 중심배치!<br>
	+ border <br> 개별부여가능<br>(굵기,색상,스타일) =전체적용<br>
	+ border-radius <br> 모서리 둥글게 표현<br> px, %<br>한자리(전체) / 두자리(왼쪽상단시작 X) / 네자리(왼쪽 강단 시계방향)

<br>
<br>
<br>

# 배치 속성

1. float <br>
- 박스를 옆으로 나열할 때 사용<br>
- 옆의 박스에 영향을 주는 속성 (나열하고자 하는 박스와 함꼐 나열값)<br>
- 레이아웃을 나열하거나 형성 + 삽화를 넣을때<br>
- 좌우 나열 가능<br>
  	좌로 나열시 -> 1,2,3...<br>
  	우로 나열시 -> ...3,2,1<br>

2. clear<br>
- float의 흐름을 끊어버린다(float 제거)<br>
  	left = 좌측 나열을 제거<br>
  	right = 우측 나열을 제거<br>
  	both = 양쪽 나열을 제거<br>
- float와 함께 사용하게 된다<br>

3. box-sizing<br>
- 박스의 크기를 어떤 것의 기준으로 계산할지 지정하는 속성<br>

<br>
<br>

# 표현 속성과 기타 속성(display)

display<br>
: 요소를 어떤 성격을 보여줄지 결정하는 속성<br>

div = 모든 css가 적용 (-block)<br>
span = 폭, width, height, margin-top,bottom.. 적용되지 않음<br>
inline-block = inline 과 block의 합성속성<br>
	       ( =글자와 같이 옆으로 나열되고, 블럭과 같이 css에 대한 모든 적용이 이루어진다)<br>

- display: none; =안보이게 처리한다<br>

<br>
<br>

# 표현 속성과 기타 속성(overflow+list))

2. overflow =부모박스에서 내용물이 넘치는 경우,  어떻게 보여질지 결정하는 속성<br>
	(overflow: hidden; -> 폭값이 존재할 때 내용을 안보이게 처리<br>
			 				     **height가 존재하지 않을때 높이를 대신한다**)<br>
	(overflow: scroll; -> 안에 내용이 넘치는 것을 스크롤<br>
			    			   **내용이 넘치지 않아도 자동 스크롤 생성**)<br>
	(overflow-(X or Y): -> X 또는 Y 축의 넘치는 내용물을 어떻게 보여질지 결정<br>

1. 목록테그
ul : 순서가 없는 목록태그 -메뉴多/블릿 ( li를 담아서 사용 )<br>
ol : 순서가 있는 목록태그 -순서나열/1,2,3... ( li를 담아서 사용 )<br>
dl : 정의목록태그 -용어 뜻을 나열 ( dt, dd를 담아서 사용)<br>
```
ol 스타일 종류
  1) decimal : 십진수 (1, 2, 3..)
  2) decimal-leading-zero : 0이 붙는 십진수 (01, 02, 03...)
  3) lower-roman : 로마 숫자 소문자
  4) upper-roman : 로마 숫자 대문자
  5) lower-alpha : 알파벳 소문자
  6) upper-alpha : 알파벳 대문자
```
<br>
<br>
<br>

# 다양한 CSS 선택자의 활용 1
#선택자<br><br>
 -후손선택자 : 해당요소의 하위요소에 있는 특정한 요소를 모두 선택<br>
> 표현 : 선택자 A 선택자 B -> 띄어쓰기로

 -자손선택자 : 해당요소의 바로 밑에 위치하는 특정한 요소를 선택<br>
> 표현 : 선택자 A>선택자 B -> 부등호로

 -동위선택자 : 동위관계에 있는 요소중에서 해당요소보다 뒤에 존재하는 특정한 요소를 선택<br>
> 표현 : 선택자 A+선택자 B = 선택자 A 바로 뒤에 위치하는 선택자 B를 선택
> 표현 : 선택자 A~선택자 B = 선택자 A 뒤에 위치하는 선택자 B를 모두 선택

 -반응선택자 : 사용자가 마우스르 이용해서 혹은 특정한 반응을 취했을때 CSS속성을 지정<br>
> hover = 특정한 요소에 마우스를 올렸을 때
> active= 특정한 요소를 마우스로 클릭했을 때

<br>
<br>
<br>

# 다양한 CSS 선택자의 활용 2

#구조선택자<br><br>
 -구조선택자 <br>
부모의 요소 안에서 특정한 위치의 요소를 선택할 때 사용<br>
후손+자손 선택자와 함께 많이 사용
* first-child = 같은 부모아래에서 형제관계를 첫번째에 해당하는 요소를 선택
* last-child = 같은 부모아래에서 형제관계를 마지막에 해당하는 요소를 선택
* nth-child( ) = 같은 부모아래에서 형제관계의 순번째에 위치하는 요소를 선택
	    [ 1,2,3... / 2n+1(홀수) / 2n(짝수) ]<br>

 -형태구조선택자 <br>
	일반구조선택자와 비슷하지만 태그 형태를 구분
* first-of-type = 부모박스 안에서 형제관계 중에 첫번째에 위치하는 태그를 선택
* last-of-type = 부모박스 안에서 형제관계 중에 마지막에 위치하는 태그를 선택
* nth-of-type = 부모박스 안에서 형제관계 중에 수열번째 위치하는 태그를 선택
* nth-last-of-type = 부모박스 안에서 형제관계 중에 뒤에서 수열번째 위치하는 태그를 선택

<br>
<br>
<br>

# 다양한 CSS 선택자의 활용 3

#속성선택자<br>
 -특정한 속성이나 특정한 속성값을 가지고 있는 html요소를 선택<br>
> [속성이름="속성값"]<br>
> [속성이름$="속성값"]<br>
> [속성이름*="속성값"]<br>

#상태선택자<br>
 -마우스의 반응에 따른 상태를 선택<br>
input[type="checkbox"]:checked+div <br>
  = checked input에 check가 된 상태<br>
<br>

#문자선택자
* p::first-letter = 특정한 선택자에 첫번째 글자를 선택<br>
* p::first-line = 특정한 선택자에 첫번째 라인을 선택<br>
<br>
#가상선택자<br>
 -선택될 요소의 앞뒤쪽에 가상의 요소를 넣어서 표현<br>
::before = 특정요소의 앞에 삽입<br>
::after = 특정요소의 뒤에 삽입

<br>
<br>
<br>

# 배경이미지 표현

#배경<br>
* background-image: url(  ),url(  );<br>
=배경이미지를 불러오는 속성 - 반복되는 성격<br>
=,로 구분지어 배경이미지를 2장 이상 적용! 먼저 작성한 이미지가 상단에 표현<br>
<br>

* background-size: ;<br>
=x y -> %, px<br>
	cover : 화면상 꽉 차게 표현, 가로세로의 비율 유지<br>
<br>

* background-attachment: ;<br>
=배경이미지를 어떤 방식으로 화면에서 표현할지 지정하는 속성<br>
> scroll : 스크롤바를 움직인다<br>
> fixed : 스크롤바가 움직여도 배경이미지가 고정<br>
<br>

* background-position: ;<br>
=배경이미지의 위치를 지정하여 표현가능한 속성<br>
=x y -> 단어, px, %<br>
>  x(left, center, right)<br>
>  y(top, center, bottom)

<br>
<br>
<br>

# 다양한 색상표현

#HEX : color codes<br>
#RGB : red, green, blue<br>
#HSL : hue, saturation, light<br><br>

1. 단어 : 단어로 입력하는 방식
2. 컬러코드 : #웹번호로 입력하는 방식
3. rgb : red, green, blue의 숫자값을 입력하는 방식
4. rgba :rgb표현방식에 alpha값이 추가
5. hsl : hue, saturation, lightness의 양값을 입력하는 방식
6. hsla : hsl표현방식에 alpha값이 추가<br>

hex(컬러코드) - 반복되는 2자리는 한자리로 줄여서 표현가능!<br>
rgb - 256개 /0 부터 255/ -> 0도 갯수로 세기 때문 0 = 아무색도 넣지 않음<br>
rgba - 색상에 대한 투명도 -> 0 부터 1 사이의 소수점<br>
<br>

**투명도**<br>
opacity<br>
 -요소의 투명도를 부여하는 속성<br>
 -0~1사이의 소수점 = 값<br>
 -자식요소를 포함한 모든 부분의 투명도가 적용<br>
 <br>

**그림자**<br>
box-shadow: Xpx Ypx Spx C; (박스)<br>
text-shadow: Xpx Ypx Spx C; (글자)<br>
X : X축 그림자 / Y : Y축 그림자  / S : 그림자크기  / C : 그림자 색상<br>

<br>
<br>

# 시맨틱 구조

#시맨틱 태그 : 의미가 있는 영역을 나누어 표현<br>

	-header = 머리말의 의미, 헤더 (로고, 네비게이션, 검색창)
	-nav(네비게이션) = 메뉴를 묶거나 메뉴를 담을때 사용
	-section = 내용물, 단락나눔, 주제별사용 (제목태그와 단락을 나누며 표현)
	-artical = 기사라는 뜻, 세부적인 단락 나눔, 웹상의 내용을 작성
	-aside = 링크, 광고, 사이드 배치
	-footer = 웹하단, 저작권, 연락처, 웹사이트의 세부정보

<br>
<br>
<br>

# 멀티미디어 요소

**#audio** : html5에서 음악이나 오디오 같은 사운드를 재생하기위해 사용<br>
           태그하나만으로 멀티미디어 기기에서 재생이 가능<br>
* src="오디오 파일의 위치를 연결"
* controls="화면에서 재생 컨트롤 막대표시"
* muted="오디오가 재생중이지만 소리를 끔(음소거)"
* loop="반복재생"video, iframe<br>

**#video** : html5에서 영상을 실행시키기 위해 사용<br>
           비디오와 같은 영상 스트리밍을 재생할때 사용<br>
* src="비디오파일의 링크를 연결"
* loop="반복재생"
* muted="음소거 / 비디오는 재생"
* width="가로폭"
* heigt="높이"
* poster="비디오 재생 시작전 준비화면, 시작이미지(url연결) - 연결하지 않을 시 영상의 시작화면"<br>

**#iframe** : 내부프레임 / html문서안에 html문서가 존재<br>
            긴 내용의 문서, 유튜브영상 등 큰 용량의 영상을 간단하게 링크로 가져올때 많이 사용<br>
* src="가져올링크 지정"
* width="가로"
* height="세로"<br><br>

크로스브라우징<br>
= 웹페이지 제작 시 모든 브라우저에서 의도한 바 대로 올바르게 표현되는 것(호환)<br>

<br>
<br>

# 표를 만드는 요소(태그)

#태이블태그 : 표를 나타내는 태그<br>
```
tr = 줄, 행
td = 칸, 열
th = table의 head 구분을 지을때 사용
       text-align:center / font-weight:bold
```
colspan = "합쳐지는 열의 개수" / 가로 셀의 합<br>
rowspan = "합쳐지는 행의 개수" / 세로 셀의 합<br>

<br>
<br>

# 표를 만드는 요소(스타일)

- boder-collapse : table과 td사이의 선값의 결합 우무를 결정하는 속성<br>
> collapse : 선사이의 틈을 병합 - table 표현시 기본값<br>
- boder-spacing : 테두리와 셀들의 간격을 지저하는 값 (2자리 입력 -> 수평, 수직)<br>
- empty-cells : 빈 셀의 보여지는 유무를 결정<br>
> hide : 사라지게 / show : 나타나게<br>
- vertical-align : 수직에 대한 정렬 -td칸은 middle이 기본값<br>

<br>
<br>

# 입력 양식 태그

#form<br>
 =웹페이지에서의 입력양식의 그룹<br>
 =원하는 정보를 연결하여 전달받기 위한 명확한 폼양식<br>
>	[폼에 쓰이는 속성]<br>
>	name="폼의 이름/식별하기 위한 이름을 지정"<br>
>	mathod="폼을 서버로 전송할때 http메소드를 지정(=전송방식)"<br>
>	get="주소표시줄에 사용자가 입력한 내용이 그대로 표시"<br>
>	post="대부분이 사용하는 방식, 내부적으로 보이지 않게 전송"<br>

<br>
- fieldse : 특정한 엘리멘트끼리 그룹화<br>
- legend : fieldset안에서 정의를 부여<br>
- label : 해당 서식의 용도, 내용<br>

```
<input = "서식" type = "속성" name = "이름">
```
<br>

ㅁ password -> 비밀번호 입력양식 - 암호화된 입력<br>
ㅁ tel -> 전화번호 입력양식 - 모바일 확인 시 숫자키패드<br>
ㅁ checkbox -> 체크박스 - 다중선택 혹은 선택시 사용<br>
ㅁ radio -> 라디오버튼 - 단일항목 선택 사용<br>
ㅁ submit -> 버튼(제출, 확인) / reset -> 버튼(회수, 다시)<br><br>

일반버튼형태 = button type="button"<br>
셀렉트박스 = select, option<br>
많은내용의 글 = textarea<br>
<br>
<br>

# 웹폰트

1. 링트,도메인,브라우저와 상관없이 웹페이지내에서 폰트가 연결되어지는 것<br>
   (일반적으로 스타일을 이용해서 연결하는 방법)<br>
   * 내 컴퓨터 내에 설치된 폰트가 존재<br>
<br>

2.  cdn 즉 링크를 이용해서 서버상의 폰터를 가져와 웹페이지에 전달하는 방법<br>
* 느려질 수 있다<br>
* 폰트가 나타나지 않는 경우가 생길 수 있다<br>
<br>

3. 폰트파일을 다운받거나, 가져와 문서와 직접 연결을 하여 폰트를 선언하는 방식<br>
* 빠르게 웹사이트에 적용<br>
* 오류가 적다<br>
<br>

> font-family: "1","2","3"; -> 1폰트가 호환되지 않을 시 2폰트,3폰트 순으로 호환<br>
<br>

```
웹포인트 확장자 종류
- EOT : IE8 이하
- TTF : 가장 기본, 압축을 푸는 형태로 많이 사용
- WOFF : 대부분의 브라우저에서 지원
- WOFF2 : WOFF보다 압축률이 더 좋음
```
<br>
<br>
<br>

# 위치 속성 1

position<br>
= 요소를 특정한 위치로 지정하여 배치하는 속성<br>
<br>
위치지정시 사용가능한 속성(left, right, top, bottom)<br>
- static : 기본값(위치 영향을 받지 않음)<br>
- relative : 상대위치(박스가 나열되는 순서대로 위치가 지정 top, left)<br>
- absolute : 절대위치(html화면 기준으로 위치가 지정 - 위치값 모두 적용 / 부모가 존재할땐 부모의 기준으로 위치 지정)<br>
- fixed : 고정위치(html화면 기준으로 위치가 지정 - 위치 모두 적용 - 고정된 상태로 표현 - 메뉴,베너)<br>

<br>
<br>

# 위치 속성 2

1. z-index : 위치요소의 우선순위를 변경하는 속성 1 ~ 9999 <br>
2. margin-a: -npx; -> a방향으로 n만큼 되돌아 가기<br>

<br>
<br>

# 변형 속성

transform<br>
1. translate( , ); -> 특정한 위치로 이동
2. translateA( ); -> A축으로 개별 이동
3. scale( ); ->사이즈 확대, 축소 (0.9<1<1.1)
4. scaleA( ); -> A축으로 값만큼 확대
5. rotate( deg); -> 특정한 값만큼 회전 - 각도(deg) / 반시계 방향 -> 마이너스 붙이기
6. rotateA( deg); -> A축을 기점으로 회전
7. skew( deg, deg); -> 특정한 각도로 기울이기, 왜곡-각도
8. skewA( deg); -> A축으로 기울이기
9. transform-origin: , ; -> 요소의 중심기점을 변경 속성 x, y (px, %, 단어)

<br>
<br>
<br>

# 변형 속성 응용

#접두어(PREFIX) -> 크로스브라우징을 위해<br>
<br>

크로스브라우징<br>

= 하나의 웹페이지를 제작하였을 때 모든 부라우저에서 올바르게 호환되게 하는 것<br>

- ms : ie9 익스플로러용
- moz : 파이어 폭스
- webkit : 사파리, 크롬
- o : 오페라
<br>
cursor: pointer; -> 마우스 커서를 손모양으로<br>
<br>
<br>

# 변환 속성

transtion = 동작을 부여 할때 사용<br>
<br>
transition-delay:<br>
   ->지연시간 (~후에)<br>
transition-duration:<br>
   -> 동작 구현에 대한 시간 값 (~동안에)<br>
transition-timing-function:<br>
   -> 시간에 따른 움직이는 속도의 값 <br>
	* linear = 일정한 값<br>
	* ease-in = 속도의 시작이 느리게<br>
	* ease-out = 속도를 느리게 끝<br>
	* ease-in-out = 느리게 시작하고 느리게 끝<br>

<br>
<br>

# 애니메이션 속성(@keyframes)

animation : 각각의 프레임 내에서 스타일을 구현하여 동작을 만들때 사용!<br>
1. animation-name -> 표현하고자 하는 요소에 "애니메이션 이름"<br>
2. animation-duration -> 애니메이션 동작에 대한 시간 (~지속될 시간)<br>
3. animation-iteration-count -> 애니메이션 횟수 = 숫자값(횟수)<br>
> infinite = 무한반복<br>

4. animation-direction -> 애니메이션의 방향<br>
> normal = 기본값
> reverse = 반대
> alternate = from과 to의 교차반복<br>

5. animation-delay -> 애니메이션의 지연값<br>
6. animation-timing-function -> 시간별 속도감 변화<br>
7. animation-play-state -> 애니메이션 효과의 재생(running) 혹은 중지(paused)<br>
<br>
@keyframes : 구간별 스타일을 부여하여 동작을 표현<br>

```
0%, from = 시작점
100%, to = 끝점
```

<br>
<br>
<br>

# 모바일 웹

모바일웹<br>
: 웹페이지를 PC가 아닌 모바일 기기 접속 시의 기기에 맞는 화면 전환의 개념<br><br>
사용자 도메인 접속 -> index 페이지 -> 기기접속 / 스크립트 분석<br>
->1 일반 PC기기 접속 -> PC > index 페이지<br>
->2 모바일기기 접속 -> mobile > index 페이지<br>

<br>
<br>

# 반응형 웹(가변그리드)

반응형 웹<br>
   : 하나의 웹페이지를 데스크탑, 태블릿, 그리고 모바일등의 다양한 기기에서 최적화된 화면으로 볼 수 있다는 것<br>
<br>
가변 그리드<br>
   : 화면 사이즈에 따라 가변이 가증한 그리드. 레이아웃이 자유롭게 변형이 가능한 형태로 %로 제작하는 방법<br>
   
* (요소의 넓이 / 콘텐츠 전체를 감싸는 요소의 넓이) * 100

<br>
<br>
<br>

# 반응형 웹(미디어쿼리)

뷰포트 : 화면사이즈 (화면에 보이는 영역을 기기 기준으로 구분)<br>
<br>

* 미디어쿼리<br>
= 뷰포트에 따라서 css의 구분을 지어 나타내는 쿼리문(css구문)<br>
max-width: -> 최대 유지하고자 하는 넓이값<br>
min-width: -> 최소 유지하고자 하는 넓이값 (100%~)<br>
<br>

* 미디어쿼리 선언<br>
@media A and ( B ) ->**and 후 띄어쓰기**<br>
<br>

* 반응형 적용 시 필수 적용<br>
meta name="viewport" content="width=device-width, initial-scale=1.0"<br>
	* 웹페이지의 너비를 기기의 화면 폭으로 설정<br>
	* 처음 페이지에서 원래 크기를 사용하도록 설정<br>
	
<br>
<br>
