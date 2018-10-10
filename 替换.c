#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int replaceSpace(char str[1000]) 
{
            int nowlen=0;
            int newlen=0;
            int i=0,j;
        
            nowlen=strlen(str);
            while(str[i]!='\0')
			{
                if (str[i]==' ')
                {
                    for (j=nowlen-1;j>i;j--)
                    {
                        str[j+2]=str[j];
                    }
                    str[i]='%';
                    str[i+1]='2';
                    str[i+2]='0';
                    nowlen=nowlen+2;                  
                }
				i++;
            }
			return nowlen;

	}
int main(void)
{
	char string[1000];
	int chang=0,k;

    gets(string);
    chang=replaceSpace(string);
	for (k=0;k<chang;k++)
	{
		printf("%c", string[k]);
	}
    return 0;
    
}
    
