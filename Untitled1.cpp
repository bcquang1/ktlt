#include <stdio.h>

void main()
{
	FILE *f;
	float dtoan, dly, dhoa;
	
	printf("Nhap diem thi toan , ly, hoa:");
	scanf("%f%f%f", &dtoan,&dly,&dhoa);
	
	f = fopen("D:\\haha.txt", "w");
	fprintf(f, "%f\n%f\n%f\n", dtoan,dly,dhoa);
	fclose(f);
}
