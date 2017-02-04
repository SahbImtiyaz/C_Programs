#include<stdio.h>
#include<conio.h>
#define MAX 20
#define true 1
#define false 0
int top=-1;
int stack[MAX];
push(char);
char pop();

main()
{
   char exp[MAX],temp;
   int i,valid=true;
   printf("ENter an Algebric Expression\n");
   gets(exp);
   for(i=0;i<strlen(exp);i++)
   {
      if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
	 push(exp[i]);
      if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
      {
	 if(top==-1)
	    valid=false;
	 else
	 {
	    temp=pop();
	    if(exp[i]==')'&&(temp=='{'||temp=='['))
	       valid=false;
	    if(exp[i]=='}'&&(temp=='('||temp=='['))
	       valid=false;
	    if(exp[i]==']'&&(temp=='{'||temp=='('))
	       valid=false;
	 }
      }
   }
   if(top>=0)
      valid=false;
   if(valid==true)
      printf("Expression is Valid\n");
   else
      printf("Expression is Invalid\n");
   getch();
}

push(char item)
{
   if(top==MAX-1)
      printf("Stack Overflow\n");
   else
   {
      top=top+1;
      stack[top]=item;
   }
}


char pop()
{
   if(top==-1)
      printf("Stack Underflow\n");
   else
      return(stack[top--]);
}