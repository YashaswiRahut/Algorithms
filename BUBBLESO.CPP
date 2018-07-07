/* To sort the array in the ascending order (bubble sort).*/

# include<iostream.h>
# include<conio.h>
 void main()
 {
  	 int A[100];
  	 int n,t,i,j;
  	 clrscr();
  	 cout<<"enter the size = ";
  	 cin>>n;
  	 cout<<"enter the array "<<"\n";
  	 for(i=0;i<n;i++)
  		   {
  			     cin>>A[i];
  		   }
	
	 for(j=0;j<n-1;j++)
		   {
		        for(i=0;i<=n-2-j;i++)
			   {
      				 if(A[i]>A[i+1])
       				    {
         					t=A[i];
         					A[i]=A[i+1];
         					A[i+1]=t;
      				    }
      			   }
     		   }
      	for(i=0;i<n;i++)
       		   {
	     		cout<<A[i]<<" ";
	   	   }
   	getch();
 }

 /* Sample output :
   enter the size 7
   enter the array 5 8 3 0 9 2 4
   0 2 3 4 5 8 9
 */
 
