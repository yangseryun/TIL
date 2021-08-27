# JDK와 컴파일러

Java ( 소프트웨어, 인디게임, POS기(관리자를 위한), 채팅)<br>
-> 웹개발 isp<br>
-> 안드로이드, 코틀린<br>
<br>

* JVM(Java Virtual Machine)<br>
	JAVA 프로그램을 실행해 줌.<br>
	JAVA Program<br>
	JVM ( JAVA 고유의 환경 구축)<br>
	OS<br>
	Hardware<br><br>

	Class Loader : 메모리 적재<br>
	Runtime Data Areas : RAM 영역 관리<br>
	Execution Engine : 소스코드 읽고 실행<br>
<br>

* JRE(Java Runtime Environment)<br>
	JVM을 생성하는 부분<br>
	JVM에서 실행할 때 필요한 라이브러리 파일과 기타 파일들을 가지고 있음.<br>
<br>

* JDK(Java Development Kit)<br>
	JVM과 JRE에 의해 실행됨.<br>
	구동될 수 있는 자바 프로그램을 생성할 수 있게 해줌.<br>
	JRE외에 개발에 필요한 도구들을 가지고 있음.<br>
<br>

1.  컴파일 : 사람의 언어를 컴퓨터의 언어로 바꾸는 작업 -> 컴파일러<br>
2. 디버그 : 오류검사<br>
3.  빌드 : 실행프로그램을 만들다<br>
4. 링크 : 실행프로그램을 가지고, 자동 실행을 시켜준다<br>
5.  실행프로그램 : 실행할 프로그램<br>

<br>
<br>

# 이클립스, JDK 설치

**jdk설치(jre, jvm 포함)**<br>
   1. 구글에 jdk8 검색
   2. 1.8버전 링크 클릭
   3. accept 클릭 후 windows 64bit 설치
   4. 경로에서 Program Files 지우기
   5. java 폴더 안에 jre폴더 만들고 설치하기
   6. 경로로 들어가서 jdk1.8.0 폴더 안에 들어가기
   7. 경로 복사하기
   8. 내pc -> 속성 -> 고급시스템 설정 -> 환경변수 -> 시스템 변수 새로만들기
   9. 변수이름 : JAVA_HOME
   10. 변수 값 : 복사했던 경로 붙여넣기
   11. 시스템 변수 Path 편집 -> %JAVA_HOME%\bin 새로만들기 -> 확인
<br>

**eclipse 설치**<br>
www.eclipse.org 검색<br>
More -> IDE and Tools 클릭 -> Desktop IDEs 다운로드 클릭 -> Eclipse Photon 클릭<br>
-> 첫번째 Windows 64-bit 클릭 -> .zip파일 클릭 (다운로드 버튼 X) -> 실행후 workspace 설정<br>

```
프로그램 -> OS(사용자가 명령을 내림) -> 하드웨어
java 프로그램 -> JVM -> OS -> 하드웨어 / 단점 : JVM이 없으면 프로그램이 돌아가지 않는다!
```

<br>
<br>
<br>

# 출력함수

- package = 첫글자는 소문자<br>
- name = 첫글자는 대문자<br>

```
	         RAM(메모리)
	OS Kernel Space - 드라이버		(높은주소)
	Stack - 지역변수, 메개변수
	(Free)
	Heap - 동적메모리 (new)
	Bss - 초기화 되지 않은 변수
	Data 영역 - 전역변수, static 변수
	Text - 상수		                (낮은주소)
```

<br>
<br>
<br>

# 변수

변수 = 값을 담기위한 저장공간<br>
변수의 선언 = 자료형 변수명 = 값;<br>
콘솔 = 사용자와 운영체제간의 소통 결과를 나타내는 창<br>
<br>

- 제어문자(개행문자)<br>
 /* */ : 범위주석<br>
 // : 한줄 주석<br>
 \n : 줄바꿈(line)<br>
 \t : 간격 맞춰 띄움(tab)<br>
<br>

- 자료형(type)<br>
 논리형 : boolean(1byte)<br>
 정수형 : int(4byte), long, short<br>
 실수형 : float, double(8byte)<br>
 문자형 : char(2byte)<br>
 문자열 : sting(정해져 있지 X)<br>
 <br>
<br>

# 변수2

변수의 사용<br>
 =변수명을 그대로 사용한다.<br>
<br>

**주의사항**<br>
<br>

**변수 선언시 :**<br>
   같은 이름의 변수로 선언 X<br>
   초기화를 해준다. (자료형 변수명 = 초기값;)<br>
   되도록 선언부에 한꺼번에 선언한다.<br>
   <br>
   
**변수명 :**<br>
   숫자는 맨 앞에 X<br>
   특수문자(_제외) X<br>
   공백은 사용 X<br>
   명사로 사용한다.<br>
   뜻이 있는 단어를 선택한다.<br>
   되도록 소문자만 사용한다.<br>
   되도록 한글은 사용 X<br>
<br>

변수를 사용하는 이유<br>
1. 반복되는 값들을 쉽게 관리하기 위해서<br>
2. 값에 의미부여를 하기 위해서<br>
<br>

출력함수에서의 사용<br>
- print()와 println()을 사용할 때, 그대로 변수명을 소괄호 안에 넣어주면 된다.<br>
- printf()는 서식문자를 사용한다. -> printf의 f는 바꾼다는 뜻의 포멧을 나타낸다.<br>
<br>

```
서식문자(항상 " " 안에서 사용)
	%d : 정수(10진수 decimal)
	%o : 정수(8진수 octal)
	%x : hexadecimal 정수 16진수
	%f : 실수
	%c : 문자
	%s : 문자열
```
<br>
<br>
<br>


# 형변환

형변환(자동형변환, 강제형변환)<br>
<br>

1. 자동형변환<br>
   실수와 정수의 연산<br>
   정수타입에 실수<br>
   실수타입에 정수<br>
<br>

2. 강제형변환(Casting)<br>
   = (자료형)값<br>
<br>
<br>

# 아스키코드와 암호화, 입력 메서드

입력상태 : 커서가 깜빡이고 있는 상태<br>
 -입력하기 전에 무엇을 입력해야할지 출력<br>
<br>
출력함수, 입력함수 = 개발자를 위한 도구<br>

>. 의 의미<br>
> A.B = A안에 B
<br>
nextLine() : 공백까지도 한 줄로 판단해 한 줄을 그대로 입력받음<br>
next() : 공백을 구분점으로 판단해서 각각의 분자열을 입력받음<br>
<br>

**nextLine 사용시 enter자리도 생각하기!**<br>

<br>
<br>

# 연산자(비트연산, 조건식)

연산자 = 기능이 있는 특수문자<br>
```
<우선순위>
1. 최우선 연산자
2. 단항 연산자
3. 산술 연산자
4. 쉬프트 연산자
5. 관계 연산자
6. 논리 연산자
7. 삼항 연산자
8. 대입 연산자
```
<br>

1. 비트연산자<br>
    AND	& : 둘다 1일 때 1<br>
    OR	 | : 둘 중 하나라도 1일때 1<br>
    XOR	^ : 두 비트 숫자가 다를 때 1<br>
    NOT	~ : ~a = -a-1<br>
    LEFT SHIFT	A << a : A를 a만큼 좌로 비트 이동<br>
    RIGHT SHIFT	>> : 우로 비트 이동<br>
			비트가 너머가면 버려지고, 빈 자리는 0으로 채워진다.<br>
<br>

2. 조건 연산자(비교 연산자)<br>
    a>0<br>
    조건식 : 결과가 참 또는 거짓 단 2개만 나오는 식<br>
    == : 같다<br>
    != : 같지 않다<br>
	
    >, < : 초과, 미만<br>
    >=, <= : 이상, 이하<br>


    A&&B : 둘 다 참이여야 참<br>
    A||B : 둘 중 하나라도 참이면 참<br>
    !A : 참이면 거짓, 거짓이면 참<br>
<br>
<br>

# 삼항연산자, 제어문(if문)

1. 삼항 연산자<br>
   조건식 ? true : false<br>
   <br>
2. 제어문<br>
   (조건문, 반복문)<br>
   - 조건문<br>
      -if문<br>
	if(조건식) {<br>
	   실행할 문장<br>
	     (위의 조건식이 거짓일 때만 검사. 참일 때에는 검사 X)}<br>
	else if(조건식) {<br>
	   실행할 문장}<br>
	else {<br>
	    실행할 문장}<br>

<br>
<br>

# 조건문
- 조건문<br>
switch문<br>
   switch(변수명) {<br>
   case 값 :<br>
   break;<br>
   case 값 :<br>
   ....<br>
   default : <br>
   }<br>

   <br>
   <br>

# 반복문

> 누적 연산자<br>
> +=, -=, *=, /=, ++, --<br>
<br>

반복문<br>
for문 / while문<br>
<br>

- for문<br>
  for(초기값; 조건식; 증감량){<br>
	반복할 문장	}<br>
<br>

- while문<br>
1. <br>
   while(조건식){<br>
	반복할 문장 }<br>
2. <br>
   do{<br>
         반복할 문장<br>
    }while(조건식);<br>

<br>
<br>

# 계산기 예제 (제어문 총정리)

Q. 계산기 프로그램을 만드시오.

```
package Calculator;

import java.util.Scanner;

public class Calc {

public static void main(String[] args) {
		
	Scanner sc=new Scanner(System.in);
		
	int num1=0,num2=0;
	int choice=0;
	String oper="";
  	String menumsg = "1. 계산하기\n2.나가기";
	String result="";
		
		while(true) {
			System.out.println(menumsg);
			choice=sc.nextInt();
			if(choice ==2) break;
			if(choice!=1) continue;
			
			num1 = Integer.parseInt(sc.next());
			oper = sc.next();
			num2 = Integer.parseInt(sc.next());
			
			switch(oper) {
			case"+":
				result=""+(num1+num2);
				break;
			case"-":
				result=""+(num1-num2);
				break;
			case "/":
				if(num2!=0) {
					result=""+(num1/num2);
				}else
					result="0으로 나눌 수 없습니다.";
				break;
			case "*":
				result=""+(num1*num2);
				break;
				default:
					result="사칙연산 외의 연산자는 사용할 수 없습니다.";
			}
	  	 System.out.println(result);
		}
	}
}
```
<br>
<br>
<br>

# 영화관 예제 (제어문 총정리)

Q. 영화 무인예매기 프로그램을 만드시오.

```
package cgv;

import javax.swing.JOptionPane;

public class CGV {

	public static void main(String[] args) {
		String hellomsg="★어서오세요 CGV입니다.★\n";
		String menumsg="①예매하기\n②구매하기\n③포인트 조회\n④나가기\n";
		String agemsg="[청소년 구매 불가 상품]\n나이를 입력하세요\n";
		String films ="①라이온킹(08:00)\n②스파이더맨(12:00)\n③사일런스(23:00)[청소년 관람 불가]\n④뒤로가기\n";
		String cook ="①팝콘\n②콜라\n③맥주\n④뒤로가기\n";
		int choice=0, age=0, money=1000000, point=0, t_price=10000;
		int p=0, c_price=3000;
		boolean t_check;
		
		while(true) {
			 t_check=true;
			 
			choice = Integer.parseInt(JOptionPane.showInputDialog(hellomsg+menumsg));
			if(choice==4) break;
			if(!(choice >=1 && choice <=2))continue;
			
			switch(choice) {
			//예매하기 영역
			case 1:
				if(money-t_price<0) {
					JOptionPane.showMessageDialog(null, "잔액이 부족합니다.");
					continue;
				}
				 choice=Integer.parseInt(JOptionPane.showInputDialog(films));
				if(choice==1) {
					JOptionPane.showMessageDialog(null, "라이온킹 예매 완료(08:00)");
				}
				else if(choice==2) {
					JOptionPane.showMessageDialog(null, "스파이더맨 예매 완료(12:00)");
				}
				else if(choice ==3) {
					age = Integer.parseInt(JOptionPane.showInputDialog(agemsg));
					if(age >20) {
						JOptionPane.showMessageDialog(null, "사일런스 예매 완료(23:00)");
					}
					else {
						t_check=false;
						JOptionPane.showMessageDialog(null,"다시 입력해 주세요.");
					}
				}
				else {
					JOptionPane.showMessageDialog(null,"메인 메뉴로 이동합니다.");
					continue;
				}
				if(t_check) { //포인트 자동 사용
					if(point >0) {
						if(point-t_price>=0) {
							point -=t_price;
						}else {
							money-=(t_price - point);
							point =0;
						}
					}else {
						money-=t_price;
						point +=(int)(t_price * 0.5);
					}
					JOptionPane.showMessageDialog(null, "현재 잔액 : "+money +"원");
				}
				break;
				//구매하기 영역
			case 2:
				switch(choice) {
				case 2:
					if(money-c_price<0) {
						JOptionPane.showMessageDialog(null, "잔액이 부족합니다.");
						continue;
					}
					 choice=Integer.parseInt(JOptionPane.showInputDialog(cook));
					if(choice==1) {
						JOptionPane.showMessageDialog(null, "팝콘 구매 완료");
					}
					else if(choice==2) {
						JOptionPane.showMessageDialog(null, "콜라 구매 완료");
					}
					else if(choice ==3) {
						age = Integer.parseInt(JOptionPane.showInputDialog(agemsg));
						if(age >20) {
							JOptionPane.showMessageDialog(null, "맥주 구매 완료");
						}
						else {
							t_check=false;
							JOptionPane.showMessageDialog(null,"다시 입력해 주세요.");
						}
					}
					else {
						JOptionPane.showMessageDialog(null,"메인 메뉴로 이동합니다.");
						continue;
					}
					if(t_check) { //포인트 자동 사용
						if(point >0) {
							if(point-c_price>=0) {
								point -=c_price;
							}else {
								money-=(c_price - point);
								point =0;
							}
						}else {
							money-=c_price;
							point +=(int)(c_price * 0.5);
						}
						JOptionPane.showMessageDialog(null, "현재 잔액 : "+money +"원");
					}
				}
						break;
				//포인트 조회 영역
			case 3:
					JOptionPane.showMessageDialog(null, "잔여 포인트 : "+p +"점");
				break;
			}
		}
	}
}
```

<br>
<br>
<br>

# 배열

배열 = 같은 타입의 값들을 한번에 저장하기 위함<br>
 * 사용할때 : 같은 타입의 변수들이 여러번 선언 되었을때<br>
 * 배열의 선언<br>
   1. 자료형[ ] 배열명 = new 자료형[ 길이 ]; -> 값들이 자동 초기화<br>
   2. 자료형 배열명[ ] ={값1,값2,...};<br>
   3. 자료형[ ] 배열명;<br>

```
정방 배열 = 배열이 정사각형처럼 보임
비정방 배열 = 배열의 모양이 일정하지 않음
```
<br>
<br>
<br>

# 2차원 배열

2차원 배열<br>
 * 배열의 선언<br>
   1. 자료형[ ][ ] 배열명 = new 자료형[행][열];<br>
   2. 자료형[ ][ ] 배열명 = { {값1,값2,..} {값3,값4,..} };<br>

<br>
<br>

# 메서드

 - 이름( ) : 메서드 / 단, 키워드( )는 메서드가 아니다!<br>

```
 f	   (x)	      =	   2x+1
 메서드	   매개변수   	   리턴값
 이름
   ->리턴값이 있을 경우만 리턴값으로 본다!
```
<br>

1.
 리턴타입 메서드명(자료형 매개변수){<br>
	실행할 문장<br>
	 return 리턴값;<br>
  }<br>

2.
  void 메서드명(자료형 매개변수){<br>
	실행할 문장<br>
 }<br>

3.
  void 메서드명( ){<br>
	실행할 문장<br>
 }<br>
<br>

 - 메서드 선언 순서<br>
 1) 메서드 명<br>
 2) 매개변수<br>
 3) 실행할 문장과 리턴값<br>
<br>

 - 메서드 주의사항<br>
 1) 매개변수가 없는 메서드는 외부에서 값을 전달 받을 수 없다.<br>
 2) 리턴값이 있는 베서드는 사용시 전체를 리턴값으로 본다.<br>
 3) 메서드 내부에 다른 메서드를 선언할 수 없다. (단, 사용은 가능하다.)<br>
 4) 메서드 선언시 매개변수는 저장공간이고, 사용시에는 값을 그 자리 순서에 맞게 넣어준다.<br>

 <br>
 <br>

 # 메서드 2

메서드를 사용하는 이유<br>
: 반복되는 기능들을 쉽게 관리하기 위해서<br>
: 코드를 줄이기 위해서<br>

```
cmd창에서 본인이 이클립스에서 만든 java파일이 있는 경로로 이동
cd 경로(방금 복사한 경로)
javac 클래스명.java
cd..
src -> java 패키지명.클래스 값입력 -> args로 받는다.
```
<br>
<br>