 #include <stdio.h>
 #include <conio.h>

       int main()
       {
       	// Swapping  program

       	int a,b;
       	clrscr();

       	printf("Enter the no. a" );
       	scanf("%d",&a);

       	printf("Enter the no. b" );
       	scanf("%d",&b);

       	a=a^b;
       	b=a^b;
   	    a=a^b;

   	    printf("\n a is %d",a);
   	     printf("\n b is %d",b);

   	     return 0;
   	 }
