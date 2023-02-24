#include <stdio.h>

int giai_thua(int n)
{
    int gt = 1;
    for (int i = 1; i <= n; i++)
    {
        gt *= i;
    }
    return gt;
}

int to_hop(int k, int n)
{
    int c = giai_thua(n) / (giai_thua(k) * giai_thua(n - k));
    return c;
}

int main()
{
    int k, n;
    printf("Nhap vao k: ");
    scanf("%d", &k);
    printf("Nhap vao n: ");
    scanf("%d", &n);

    int c = to_hop(k, n);
    printf("To hop chap %d cua %d la: %d", k, n, c);
    return 0;
}