#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <memory.h>
#include <time.h>
#define PI acos(-1)
#define MAX(x,y) x>y?x:y
#define MIN(x,y) x<y?x:y
#define N 100000
int vis[N];
int arr[N];
int n,ans=0;
int sarr[N];
void dfs(int t)
{
    int i;
    if(t>n)
    {
        int sum=0,j;
        for(i=1,j=n-1;i<=n;i++,j--)
        {
            sum+=sarr[i]*pow(10,j);
        }
        arr[ans++]=sum;
        return;
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i]!=1)
        {
            sarr[t]=i;
            vis[i]=1;
            dfs(t+1);
            vis[i]=0;
        }
    }
}
int main()
{
    scanf("%d",&n);
    memset(vis,0,sizeof(vis));
    dfs(1);
    int i,j,k;
    for(i=0;i<ans;i++)
    {
        k=i;
        for(j=i+1;j<ans;j++)
        {
            if(arr[i]<arr[j]) k=j;
        }
        if(k!=i)
        {
            int temp;
            temp=arr[i];arr[i]=arr[k];arr[k]=temp;
        }
    }
    for(i=0;i<ans;i++) printf("%d\n",arr[i]);
    return 0;
 } 
