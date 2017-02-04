#include<stdio.h>
#include<conio.h>
#define max 100
void main()
{
	int a[max][max],row,col,i,j,count=0,count2=0;
	printf("Enter the row size\n");
	scanf("%d",&row);
	printf("Enter the column size\n");
	scanf("%d",&col);
	printf("Enter the elemments of the matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The elements of the matrix are\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j]==0)
			{
				count++;
			}
			else
			{
				count2++;
			}
			printf("%d\t",a[i][j]);
		}
		printf("\n\n");
	}
	printf("\nThe zero's Are \t%d\t TImes Present\n",count);
	printf("\nThe Non Zero's Are \t%d\t Times present\n",count2);
	if(count>count2)
	{
		printf("\nThe Matrix is sparse Matrix\n");
	}
	else
	{
		printf("\nThe Matrix is not sparse Matrix\n");
	}
}
