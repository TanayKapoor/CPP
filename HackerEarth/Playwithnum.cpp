#include <iostream>
#include <cstdio>

inline void fastRead_long(long *a)
{
    register char c = 0;
    while (c < 33)
        c = getchar_unlocked();
    *a = 0;
    while (c > 33)
    {
        *a = *a * 10 + c - '0';
        c = getchar_unlocked();
    }
}

int main()
{

    long *B = NULL;
    long A, N, Q, L, R, i, j, k, mean = 0;

    scanf("%ld%ld",&N,&Q);
    fastRead_long(&N);
    fastRead_long(&Q);

    B = new long[N];
    for (i = 1; i <= N; i++)
    {
        scanf("%ld",&A);
        fastRead_long(&A);
        B[i] = B[i - 1] + A;
    }
    for (j = 1; j <= Q; j++)
    {
        scanf("%ld%ld",&L,&R);
        fastRead_long(&L);
        fastRead_long(&R);
        mean = B[R] - B[L - 1];
        printf("%ld\n", mean / (R - L + 1));
        mean = 0;
    }
    return 0;
}