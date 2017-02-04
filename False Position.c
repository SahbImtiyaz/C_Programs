#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
float f(float x)
{
	float sum;
	sum=3*x*x+x-192;
	return sum;
}
main()
{
	int i=0;
	float x1,x2,x,eps;
	printf("Enter the value of Interval\n");
	scanf("%f%f",&x1,&x2);
	printf("Enter the epsilon\n");
	scanf("%f",&eps);
	if(f(x1)*f(x2)<0)
	{
		x=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
		while(f(x)!=eps)
		{
			printf("F(%f)\t=\t%f\n",x,f(x));
			if(f(x)<0)
			{
				x2=x;
				x=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
			}
			else if(f(x)>0)
			{
				x1=x;
				x=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
			}
			i++;
			if(i>30)
			{
				getch();
			}
		}			
		printf("\n The root Is\t %f",x);
		printf("\nThe Root found After %d iterations\n",i);
    }
    else
    	printf("\n Root Does Not Exists in the selected interval\n");
	getch();
}
