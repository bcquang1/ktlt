#include <stdio.h>

int main()
{
    int a[50];
    int n,i;
    printf("Nhap vao so phan tu cua mang:");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        printf("Nhap gia tri cho a[%d]:", i+1);
        scanf("%d", &a[i]);
    }
    printf("\nCac gia tri la: %3d", a[i]);
    return 0;
}