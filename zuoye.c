#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

struct stu
{
	char name[20];
};
int main(void)
{
	int fs[1000],i, j, m,max,n;
	struct stu stu[1000];
	char a;
	
    scanf("%d %d", &m, &n);	
	for (i=0;i<m;i++)
	{
		scanf("%s %d", stu[i].name ,&fs[i]);
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
				a=*stu[i].name;
				*stu[i].name=*stu[j].name;
				*stu[j].name=a;
			}
		}
	}
	printf("\n");
	for (i=0;i<m;i++)
	{
		printf("%s %d\n", stu[i].name ,fs[i]);
	}
	return 0;
}