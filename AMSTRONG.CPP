/* Amstrong number*/
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 int i,a,b,c,d, a1,a2;
 clrscr();
 cout<<"enter the number :  ";
 cin>>a;
 a1=a;
 a2=a;
 c=0;
 while(a>0)
 {
	   a=a/10;
       c++;
 }
 b=0;
 while(a1>0)
 {
	  d=a1%10;
      a1=a1/10;
      b=b+pow(d,c);

  }
 if(b==a2)
 {    cout<<"\nit is a amstrong number";

  }
  else
  {
      cout<<"\nit is not a armstrong";
   }

   getch();
 }
 /* Sample output
 enter the number :  123

 it is not a armstrong
 */