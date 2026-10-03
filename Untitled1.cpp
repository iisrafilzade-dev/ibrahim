#include <stdio.h>
int main (){
	int i,n,b,c;
	scanf("%d", &n );
	c=0;
for (i = 1 ; i <=  n ; i++) 
   if (n%i== 0)
    b=b+1;
    c=c+i;
    printf( "%d " , i);
	
		
return 0;				
}
