#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i = 0, j, k = 0;
	float fni, sni;
	char fns[100], sns[100], v[100];
	printf("Enter the value :- ");
	fgets(v, 100000, stdin);
	v[strlen(v)-1] = '\0';
	for (j = 0; v[i] == '0' || v[i] == '1' || v[i] == '2' || v[i] == '3' || v[i] == '4' || v[i] == '5' || v[i] == '6' || v[i] == '7' || v[i] == '8' || v[i] == '9' || v[i] == '.'; i++) 
	{
		fns[i] = v[i];
	}
	fni = atof(fns);
	for (; v[k] != '\0'; k = i)
	{
		for ( ;v[i] == '+' || v[i] == '-' || v[i] == '*' || v[i] == '/'; i++)
		{
			if (v[i] == '+')
			{
				i++;
				for (j = 0;v[i] == '0' || v[i] == '1' || v[i] == '2' || v[i] == '3' || v[i] == '4' || v[i] == '5' || v[i] == '6' || v[i] == '7' || v[i] == '8' || v[i] == '9' || v[i] == '.';i++, j++) 
				{
					sns[j] = v[i];
				}
				sni = atof(sns);
				fni = fni + sni;
			}
			if (v[i] == '-')
			{
				i++;
				for (j = 0;v[i] == '0' || v[i] == '1' || v[i] == '2' || v[i] == '3' || v[i] == '4' || v[i] == '5' || v[i] == '6' || v[i] == '7' || v[i] == '8' || v[i] == '9' || v[i] == '.';i++, j++) 
				{
					sns[j] = v[i];
				}
					sni = atof(sns);
					fni = fni - sni;
				}
			if (v[i] == '*')
			{
				i++;
				for (j = 0;v[i] == '0' || v[i] == '1' || v[i] == '2' || v[i] == '3' || v[i] == '4' || v[i] == '5' || v[i] == '6' || v[i] == '7' || v[i] == '8' || v[i] == '9' || v[i] == '.';i++, j++) 
				{
					sns[j] = v[i];
				}
				sni = atof(sns);
				fni = fni * sni;
			}
			if (v[i] == '/')
			{
				i++;
				for (j = 0;v[i] == '0' || v[i] == '1' || v[i] == '2' || v[i] == '3' || v[i] == '4' || v[i] == '5' || v[i] == '6' || v[i] == '7' || v[i] == '8' || v[i] == '9' || v[i] == '.';i++, j++) 
				{
					sns[j] = v[i];
				}
				sni = atof(sns);
				fni = fni / sni;
			}		
		}
		i--;
	}
	if (v[i] == '\0')
	{
		printf("Result is :- %.3f\n", fni);
	}
	main();
	return 0;
}