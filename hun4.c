#include <stdio.h>
 #include<conio.h>
void main(void) 
{
	int a[100],n,i,j,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
  if(a[i]!=0)
  {
		c=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c++;a[j]=0;}}
				
				
					
				
			
		
		if(c==1)
    {
			printf("%d",a[i]);
		}
	}
}
