#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <vector>
#define eps 1e-8
using namespace std;
int main()
{
   // freopen("date.txt", "r", stdin);
    int sum=0;
    for(int i=3;i<=999;i++)
        if(i%3==0 || i%5==0   )sum+=i;
    cout<<sum<<endl;
    return 0;
}
