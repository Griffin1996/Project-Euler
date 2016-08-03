#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <vector>
#define eps 1e-8
using namespace std;
int dp[111][111];
int main()
{
    freopen("p067_triangle.txt", "r", stdin);
    for(int i = 1; i <= 100; i++)
        for(int j = 1; j <= i; j++)
            scanf("%d", &dp[i][j]);
    for(int i = 99; i >= 1; i--)
        for(int j = 1; j <= i; j++)
            dp[i][j] += max(dp[i + 1][j], dp[i + 1][j + 1]);
    printf("%d\n", dp[1][1]);
    return 0;
}
