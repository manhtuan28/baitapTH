#include <stdio.h>

int tim_uscln(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return tim_uscln(b, a % b);
}

int tim_bscnn(int a, int b)
{
	return (a * b) / tim_uscln(a, b);
}

int main()
{
	int a, b;
	printf("Nhap vao a: ");
	scanf("%d", &a);
	printf("Nhap vao b: ");
	scanf("%d", &b);
	
	printf("Uoc so chung lon nhat cua %d va %d la: %d\n", a, b, tim_uscln(a,b));
	printf("Boi so chung nho nhat cua %d va %d la: %d", a, b, tim_bscnn(a,b));

	return 0;
}