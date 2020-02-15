#include <iostream> 

void f1(int *a, int *b) {
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
int main() {
	int a = 0;
	int b = 111;
	f1(&a,&b);
	printf("a= %d, b = %d\n", a, b);

	f1(&b,&a);
	printf("a= %d, b = %d\n", a, b);
	return 0;
}
