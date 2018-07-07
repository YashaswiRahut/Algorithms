/* Factorial*/
#include<iostream.h>
#include<conio.h>
int fact(int);
void main()
{
	 int a,m;
	 clrscr();
	 cout<<"enter a ";
	 cin>>a;
	 m=fact(a);
	 cout<<m;
	 getch();
}
int fact(int d)
{
	  int k,f=1,i;
	  for(i=1;i<=d;i++)
		  f=f*i;
	  return f;
 }
 /* Sample output
 enter a 5
 120
 */