/* C Program to Find Maximum Occurring Character in a String */
 
#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100], result;
  	int i, len;
  	int max = -1;
  	
	int freq[256] = {0};
	clrscr();
 
  	printf("\n Please Enter any String :  ");
  	gets(str);

        for ( i = 0; i <= strlen (str); i++)  
 			{  
			// The ASCII value of A is 65 and Z is 90  
		 if (str[i] >= 65 && str[i] <= 90)  
 		str[i] = str[i] + 32; /* add 32 to string character to convert into lower case. */  
 			}

  	
  	len = strlen(str);
  	
  	for(i = 0; i < len; i++)
  	{
  		freq[str[i]]++;
	}
  		
  	for(i = 0; i < len; i++)
  	{
		if(max < freq[str[i]])
		{
			max = freq[str[i]];
			result = str[i];
		}
	}
	printf("\n The Maximum Occurring Character in a Given String = %c ", result);
	  getch();

  	return 0;
}