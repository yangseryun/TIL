#include <stdio.h>
void main() {

	int a = 10, b = 10, c, d;
	c = --a;//������		a=9
	d = a--;//������		d=9, a���� ����, a=8
	printf("a=%d,b=%d,c=%d,d=%d", a, b, c, d);
}