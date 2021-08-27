#include <stdio.h>
void main() {

	int a = 10, b = 10, c, d;
	c = --a;//전위형		a=9
	d = a--;//후위형		d=9, a값을 감소, a=8
	printf("a=%d,b=%d,c=%d,d=%d", a, b, c, d);
}