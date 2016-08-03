#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <vector>
#define eps 1e-8
using namespace std;
int dp[18][18];
int main()
{
    freopen("date.txt", "r", stdin);
    for(int i = 1; i <= 15; i++)
        for(int j = 1; j <= i; j++)
            scanf("%d", &dp[i][j]);
    for(int i = 14; i >= 1; i--)
        for(int j = 1; j <= i; j++)
            dp[i][j] += max(dp[i + 1][j], dp[i + 1][j + 1]);
    printf("%d\n", dp[1][1]);
    return 0;
}
