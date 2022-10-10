#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,a[100];
	scanf("%d",&t);
	while(t--)
	{
	    int l,r,c=0;
	    scanf("%d %d",&l,&r);
	   
	    for(i=0;i<100000;i++)
	    {
	       if(i>=l && i<=r)
	      {
	         if(i%10==2 || i%10==3 || i%10==9)
	         {
	             c++;
	         }
	      }
	    }
	   printf("%d
",c);
	}
	
	return 0;
}
