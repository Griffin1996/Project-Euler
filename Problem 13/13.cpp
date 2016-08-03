#include <iostream>
#include <cstring>
#include <cstdio>
#include<fstream>
using namespace std;
char s[1000];
int ss[1000];
int sum[1000];
int main()
{   freopen("data.txt", "r", stdin);
    freopen("result.txt", "w", stdout);
    memset (sum,0,sizeof(sum));
    int len;
    while (~scanf("%s",s))

      {

          memset(ss,0,sizeof(ss));

          len=strlen(s);int t=0;

          for (int i=len-1,j=0;i>=0;i--,j++)

            {

                ss[j]=s[i]-'0';

            }

          for (int k=0;k<1000;k++)

            {

                int temp=sum[k]+ss[k]+t;

                    sum[k]=temp%10;

                    t=temp/10;

            }

      }

      int p;

      for (p=999;p>=0;p--)

       {

           if (sum[p]!=0) break;

       }

      for(int k=p;k>=0;k--)

       {

           cout<<sum[k];

       }

       cout<<endl;

    return 0;

}
