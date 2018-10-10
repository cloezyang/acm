#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
struct stu
{
	char name[25],nam[25];
};

int main(void)
{
    struct stu st[1000];
	int fs[1000],i, j, m,max,n;
	scanf("%d%d", &m, &n);	
	for (i=0;i<m;i++)
	{
		scanf("%s%d", st[i].name ,&fs[i]);
	}	
	for (i=0;i<m-1;i++)
	{	
		max = fs[i];
		for (j=i+1;j<m;j++)
		{
			if (fs[j] > max)
			{	
				max = fs[j];
				fs[j]=fs[i];
				fs[i]=max;
				*st[j].nam=*st[i].name;
				*st[i].name=*st[j].name;
				*st[j].name=*st[j].nam;
			}
		}
	}
	for (i=0;i<m;i++)
	{
		printf("%s %d\n", st[i].name ,fs[i]);
	}
	return 0;
}