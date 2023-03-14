#include <stdio.h>
int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int min(int x, int y)
{
	if (x > y)
		return y;
	else
		return x;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d",&a, &b, &c);
	int d=max((max(a, b)), (max(a, c)));
	int f=min((min(a, b)), (min(a, c)));
	int x = d - f;
	printf("max=%d\n", d);
	printf("min=%d\n", f);
	printf("X=%d\n", x);
	return 0;
	
}
