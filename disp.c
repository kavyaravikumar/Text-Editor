#include <stdio.h>

FILE *fp1;

void Display()
{
	char fn[20],c;
	printf("\n\tEnter the file name: ");
	scanf("%s",fn);
	fp1=fopen(fn,"r");
	if(fp1==NULL)
		printf("\n\tFile not found!");
		
	
	else
	{
		while(!feof(fp1))
		{
			c=getc(fp1);
			printf("%c",c);
		}

		fclose(fp1);
	}

}

main()
{
	Display();	
}