#include <stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    if(m<0||m>100)
    {
       	printf("Score is error!");
    }
    else if(m<=59)
    {
        printf("%c",'E');
    }
    else if (score <= 69)
    {
		printf("%c", 'D');
    }
	else if (score <= 79)
    {
		printf("%c", 'C');
    }
	else if (score <= 89)
		printf("%c", 'B');
	else if (score <= 100)
		printf("%c", 'A');
	return 0;
}