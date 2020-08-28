#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,c,l,x;

    while(scanf("%d",&t)==1)
    {

        int dis1=0,ct1=0,dis2=0,ct2=0,dis3=0,ct3=0;
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d%d%d",&c,&l,&x);
            if(l==1)
            {
                if(x>dis1)
                {
                    dis1=x;
                    ct1=c;
                }
                else if(x==dis1&&c<ct1)
                {
                    dis1=x;
                    ct1=c;
                }
            }
            else if(l==2)
            {
                if(x>dis2)
                {
                    dis2=x;
                    ct2=c;
                }
                else if(x==dis2&&c<ct2)
                {
                    dis2=x;
                    ct2=c;
                }
            }
            if(l==3)
            {
                if(x>dis3)
                {
                    dis3=x;
                    ct3=c;
                }
                else if(x==dis3&&c<ct3)
                {
                    dis3=x;
                    ct3=c;
                }
            }
        }
        printf("%d %d\n%d %d\n%d %d\n",dis1,ct1,dis2,ct2,dis3,ct3);
    }
    return 0;
}
