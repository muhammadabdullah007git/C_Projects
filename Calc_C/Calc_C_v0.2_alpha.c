#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char v[30], v1[30], fs[30], ss[30], ts[30];
	int i = 0, j = 0, k = 0, l = 0;
	float f, s, r;
	for (j = 0;j < 30; j++)
			{
				v[j] = '\0';
				v1[j] = '\0';
				fs[j] = '\0';
				ss[j] = '\0';
				ts[j] = '\0';
			}
	printf("This is a calculator written c. It's in innitial phase. It only supports '+', '-', '*', '/'.\nEnter the value :- ");
	fgets(v, 30, stdin);
	v[strlen(v) - 1] = 'e';
	for (i = 0; v[i] != 'e'; i++)
	{
		if (v[i] == '/' || v[i] == '*')
		{
			l = i;
			for (j = i - 1; v[j] == '0' || v[j] == '1' || v[j] == '2' || v[j] == '3' || v[j] == '4' || v[j] == '5' || v[j] == '6' || v[j] == '7' || v[j] == '8' || v[j] == '9' || v[j] == '.'; j--, l--)
			{
				fs[j] = v[j];
			}
			if ( j != 0 )
			{
				for (; j >= 0; j--)
				{
					fs[j] = '0';
				}
			}
			for (j = 0, k = i + 1; v[k] == '0' || v[k] == '1' || v[k] == '2' || v[k] == '3' || v[k] == '4' || v[k] == '5' || v[k] == '6' || v[k] == '7' || v[k] == '8' || v[k] == '9' || v[k] == '.'; k++, j++)
			{
				ss[j] = v[k];
			}
			f = atof(fs);
			s = atof(ss);
			if (v[i] == '/')
			{
				r = f / s;
			}
			else if (v[i] == '*')
			{
				r = f * s;
			}
			sprintf(ts, "%.3f", r);
			for (j = 0; j < l; j++)
			{
				v1[j] = v[j];
			}
			for (l = 0; l < strlen(ts); l++, j++)
			{
				v1[j] = ts[l];
			}
			for (; k < (strlen(v)-1); k++, j++)
			{
				v1[j] = v[k];
			}
			for (j = 0;j < 30; j++)
			{
				v[j] = '\0';
			}
			for (j = 0;j < strlen(v1); j++)
			{
				v[j] = v1[j];
			}
			v[j] = 'e';
			for (j = 0;j < 30; j++)
			{
				v1[j] = '\0';
				fs[j] = '\0';
				ss[j] = '\0';
				ts[j] = '\0';
			}
			i = 0;
		}
	}
	for (i = 0; v[i] != 'e'; i++)
	{
		if (v[i] == '+' || v[i] == '-')
		{
			l = i;
			for (j = i - 1; v[j] == '0' || v[j] == '1' || v[j] == '2' || v[j] == '3' || v[j] == '4' || v[j] == '5' || v[j] == '6' || v[j] == '7' || v[j] == '8' || v[j] == '9' || v[j] == '.'; j--, l--)
			{
				fs[j] = v[j];
			}
			if ( j != 0 )
			{
				for (; j >= 0; j--)
				{
					fs[j] = '0';
				}
			}
			for (j = 0, k = i + 1; v[k] == '0' || v[k] == '1' || v[k] == '2' || v[k] == '3' || v[k] == '4' || v[k] == '5' || v[k] == '6' || v[k] == '7' || v[k] == '8' || v[k] == '9' || v[k] == '.'; k++, j++)
			{
				ss[j] = v[k];
			}
			f = atof(fs);
			s = atof(ss);
			if (v[i] == '+')
			{
				r = f + s;
			}
			else if (v[i] == '-')
			{
				r = f - s;
			}
			sprintf(ts, "%.3f", r);
			for (j = 0; j < l; j++)
			{
				v1[j] = v[j];
			}
			for (l = 0; l < strlen(ts); l++, j++)
			{
				v1[j] = ts[l];
			}
			for (; k < (strlen(v)-1); k++, j++)
			{
				v1[j] = v[k];
			}
			for (j = 0;j < 30; j++)
			{
				v[j] = '\0';
			}
			for (j = 0;j < strlen(v1); j++)
			{
				v[j] = v1[j];
			}
			v[j] = 'e';
			for (j = 0;j < 30; j++)
			{
				v1[j] = '\0';
				fs[j] = '\0';
				ss[j] = '\0';
				ts[j] = '\0';
			}
			i = 0;
		}
	}
	printf("%.3f\n",r);
	return 0;
}
