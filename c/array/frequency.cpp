#include<stdio.h>
int main()
{
int j,k,s,i,count=0,n;
 
    printf("Enter  the string : ");
    scanf("%s");

    for(j=0;s[j];j++);
    {
	
	 n=j;
    }
	printf(" frequency count character in string:\n");
 
    for(i=0;i<n;i++)  
    {
     	count=1;
    	if(s[i])
    	{
		
 		  for(j=i+1;j<n;j++)  
	      {   
	    	
	        if(s[i]==s[j])
    	    {
                 count++;
                 s[j]='\0';
	     	}
	      }  
	      printf(" '%c' = %d \n",s[i],count);
}
}
}