#include<stdio.h>
int g[10]={9,8,1,2,3,7,6,5,4,0};
int main()
{

        int n=10;
        for(int k=0;k<10;k++)
        {
            int c=0;
            for(int i=0;i<n-1;i++)
            {
                if(g[i]<g[i+1])
                {
                    int t=g[i];
                    g[i]=g[i+1];
                    g[i+1]=t;
                    c++;
                }
            }
            if(c==0)break;
            for(int i=0;i<n;i++)
            {
                    printf("%d ",g[i]);
            }
            printf("\n");

        }

}
