#include <stdio.h>

int main()
{
    int n;
    printf("Nhap vao n: ");
    scanf("%d", &n);

    printf("Cac uoc so cua %d la: ", n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("\n%d", i);
        }
    }

    return 0;
}