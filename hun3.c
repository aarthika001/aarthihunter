#include <stdio.h>
#include<conio.h>
void main()
{
int a[100],k=0,n,i,t,j,b[100],c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    if(a[i]==i)
    {
        b[k]=a[i];
        k++;
        c=1;
    }
    
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
}
if(c==0)
{
    printf("-1");
}
else
{
    for(i=0;i<k;i++)
    {
        printf("%d",b[i]);
    }
}
    return 0;
}
