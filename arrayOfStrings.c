#include<stdio.h>
#include<string.h>
void main()
{
	char s[]="banana";
	//char fruit[][6]={"bananb","mango","guava","orange","apple","pineap"};
	char f[6][10];
	
	char *p;
	int len1,len2,c=0,i,j;
	for(i=0;i<6;i++)
	{
		scanf("%s",f[i]);
	}
	
	len1=strlen(s);
	
	for(i=0;i<6;i++)
	{c=0;
		if(strlen(f[i])==len1)
			
		{
			p=f[i];
			for(j=0;j<len1;j++)
			{
				if(p[j]==s[j])
					continue;
				else
					c++;
			}
			
		}
		else
			continue;
		if(c==1)
			printf("YES");
		else
			printf("NO");
	}
	
}
