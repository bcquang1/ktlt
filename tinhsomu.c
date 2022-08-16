#include <stdio.h>


int mu(int x, int n)
{
	if(n==0)
	return 1;
	else
	return x*mu(x,n-1);
}

int main()
{
	int x,n;
	printf("Nhap so X:");
	scanf("%d",&n);
	printf("Nhap so mu n:");
	scanf("%d", &x);
	printf("Ket qua la: %d", mu(n,x));
	getch();
	return 0;
}
