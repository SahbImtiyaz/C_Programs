					#include<stdio.h>
					#include<conio.h>
					#include<math.h>
					#include<stdlib.h>
					float f(float x)
					{
					    float sum;
					    sum=(x*x*x)-3*(x*x)+x+1;
					    return sum;
					}
					main()
					{
						int i=0;
						float x1,x2,x3,eps,f1,f2,f3;
						printf("Enter the value of Interval\n");
						scanf("%f%f",&x1,&x2);
						printf("Enter the epsilon\n");
						scanf("%f",&eps);
						f1=f(x1);
						f2=f(x2);
						for(i=0;i<30;i++)
						{
							x3=((f2*x1)-(f1*x2))/(f2-f1);
							f3=f(x3);
							printf("\nF(%f)\t=\t%f\n",x3,f3);
							if(fabs(f3)==eps)
							{
								printf("\nThe root is =\t%f\n",x3);
								printf("\nFound after \t%d itterations\n",i+1);
								break;
							}
							else
							{
								f1=f2;
								f2=f3;
								x1=x2;
								x2=x3;
							}
						}
						getch();
					}
