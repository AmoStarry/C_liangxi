#include<stdio.h>
int main()
{
	int i,j,t,a[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[j]<a[i])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%5d",a[i]);
	}
	return 0;
 } 


#include<stdio.h>
main() { 
    int i,j,a[10],t; 
     for(i=0;i<10;i++) 
        scanf("%d",&a[i]); 
    for(j=1;j<10;j++) 
        for(i=0;i<=9-j;i++) 
            if(a[i]>a[i+1]) {
                t=a[i+1];a[i+1]=a[i];a[i]=t;} 
    for(i=0;i<10;i++) 
        printf("%5d",a[i]);
return 0;
}