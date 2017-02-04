#include<stdio.h>
#include<conio.h>
float f(float x)
{
	float sum;
	sum=3*x*x*x-192;
	return sum;
}
df(float x)
{
	float val;
	val=6*x*x;
	return val;
}
main()
{
	int i=0;
	float x0,x,eps;
	printf("Enter the initial Guess\n");
	scanf("%f",&x0);
	printf("Enter the epsilon\n");
	scanf("%f",&eps);
	while(f(x0)!=eps)
	{
		printf("\n F(%f)=\t %f",x0,f(x0));
		x=x0-(f(x0)/df(x0));
		x0=x;
		i++;
		if(i>20)
		{
			getch();
		}
	}
	printf("\n\n\n Root found =\t%f",x0);
	printf("\n\n Found Afetr %d Iterations",i);
	getch();
}
