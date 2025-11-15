#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
double Calc_C(char v[100]);
int main()
{
	printf("  ++++        --      **        ////                //\n++    ++     ----     **      //    //             //  \n++          --  --    **      //                  //  \n++         --------   **      //                  \\\\  \n++    ++  --      --  ******* //    //  ________   \\\\  v0.4\n  ++++   --        -- *******   ////   |________|   \\\\ beta\nEnter i for info, h for history and q for close.\n");
	char v[100], v1[100], ts[100], a[100] = "0";
	double r = 0;
	int i = 0, j = 0, k = 0, l = 0;
	FILE *h_file;
	h_file = fopen("history.txt", "a+");
	for (j = 0;j < 100; j++)
			{
				v[j] = '\0';
				v1[j] = '\0';
				a[j] = '\0';
			}
	while(v[0] != 'q')
	{
		printf("-> ");
		fgets(v, 100, stdin);
		if (v[0] == '0' || v[0] == '1' || v[0] == '2' || v[0] == '3' || v[0] == '4' || v[0] == '5' || v[0] == '6' || v[0] == '7' || v[0] == '8' || v[0] == '9' || v[0] == '.' || v[0] == 'p' || v[0] == 'e' || v[0] == 'a' || v[0] == '(' || v[0] == '-' || v[0] == '+')
		{
			v[strlen(v) - 1] = 'q';
			for (i = 0; v[i] != 'q'; i++)
			{
				if (v[i] == 'a')
				{
					r = atof(a);
					sprintf(ts, "%.5f", r);
					for (j = 0; j < i; j++)
					{
						v1[j] = v[j];
					}
					for (l = 0; l < strlen(ts); l++, j++)
					{
						v1[j] = ts[l];
					}
					for (k = i+1; k < (strlen(v)-1); k++, j++)
					{
						v1[j] = v[k];
					}
					for (j = 0;j < 100; j++)
					{
						v[j] = '\0';
					}
					for (j = 0;j < strlen(v1); j++)
					{
						v[j] = v1[j];
					}
					v[j] = 'q';
					for (j = j+1; j < 100; j++)
					{
						v[j] = '\0';
					}
					for (j = 0;j < 100; j++)
					{
						v1[j] = '\0';
						ts[j] = '\0';
					}
					i = 0;
					j = 0;
					k = 0;
					l = 0;
					r = 0;
				}
			}
			v[strlen(v) - 1] = '\0';
			fprintf(h_file, "%s", v);
			v[strlen(v)] = 'q';
			r = Calc_C(v);
			for(i = 0; i < 100; i++)
			{
				a[i] = '\0';
			}
			sprintf(a, "%.5f", r);
		}
		if (v[0] == '0' || v[0] == '1' || v[0] == '2' || v[0] == '3' || v[0] == '4' || v[0] == '5' || v[0] == '6' || v[0] == '7' || v[0] == '8' || v[0] == '9' || v[0] == '.' || v[0] == '-')
		{
			for(j = 0; v[j] != '.';j++)
			{
				v1[j] = v[j];
			}
			if ((r - atof(v1)) == 0)
			{
				fprintf(h_file, " = %.0f\n", r);
				printf("= %.0f\n", r);
			}
			else
			{
				fprintf(h_file, " = %.5f\n", r);
				printf("= %.5f\n", r);
			}
			for (j = 0; j < 100; j++)
			{
				v[j] = '\0';
			}
			j = 0;
			fclose(h_file);
			h_file = fopen("history.txt", "a+");
		}
		else if (v[0] == 'i')
		{
			printf("-> Welcome to Calc_C. It's a calculator application Completly written c. It can take a whole operation of various sub operations and solev it. It works with double data type You can add operation up to 100 charracters. It supports continues operations. You can use resualt of previews operation on next one. For that where you need the result use 'a'. It supports '+', '-', '*', '/', '!', '^', '()','r'.\n");
		}
		else if (v[0] == 'h')
		{
			printf("-> This is history of Calc_C. Enter c to clear history.");
			for (int h = '\n';h != EOF;h = fgetc(h_file))
			{
				printf("%c", h);
				if (h == '\n')
				{
					printf("-> ");
				}
			}
			printf("\n");
		}
		else if (v[0] == 'c')
		{
			fclose(h_file);
			h_file = fopen("history.txt", "w");
			fclose(h_file);
			h_file = fopen("history.txt", "a+");
		}
	}
	if (v[0] == 'q')
	{
		for (j = 0;j < 100; j++)
			{
				v[j] = '\0';
				v1[j] = '\0';
				a[j] = '\0';
			}
		fclose(h_file);
		printf("Alvida\n");
	}
	return 0;
}
double Calc_C(char v[100])
{
	char v1[100], fs[100], ss[100], ts[100];
	int i = 0, j = 0, k = 0, l = 0;
	double f, s, r;
	for (j = 0;j < 100; j++)
			{
				v1[j] = '\0';
				fs[j] = '\0';
				ss[j] = '\0';
				ts[j] = '\0';
			}
	for (i = 0; v[i] != 'q'; i++)
	{
		if (v[i] == ')')
		{
			l = i;
			for (j = i-1;v[j] != '(';j--, l--)
			{
				v1[j] = v[j];
			}
			if ( j >= 0 )
			{
				for (; j >= 0; j--)
				{
					v1[j] = '0';
				}
			}
			v1[i] = 'q';
			for(j = i + 1; j < 100; j++)
			{
				v1[j] = '\0';
			}
			r = Calc_C(v1);
			for(j = 0; j < 100; j++)
			{
				v1[j] = '\0';
			}
			sprintf(ts, "%.5f", r);
			for (j = 0; j < l -1; j++)
			{
				v1[j] = v[j];
			}
			for (l = 0; l < strlen(ts); l++, j++)
			{
				v1[j] = ts[l];
			}
			for (k = i+1; k < (strlen(v)-1); k++, j++)
			{
				v1[j] = v[k];
			}
			for (j = 0;j < 100; j++)
			{
				v[j] = '\0';
			}
			for (j = 0;j < strlen(v1); j++)
			{
				v[j] = v1[j];
			}
			v[j] = 'q';
			for (j = j+1; j < 100; j++)
			{
				v[j] = '\0';
			}
			for (j = 0;j < 100; j++)
			{
				v1[j] = '\0';
				fs[j] = '\0';
				ss[j] = '\0';
				ts[j] = '\0';
			}
			i = 0;
			j = 0;
			k = 0;
			l = 0;
			f = 0;
			s = 0;
			r = 0;
		}
	}
	for (i = 0; v[i] != 'q'; i++)
	{
		if (v[i] == '!' || v[i] == '^')
		{
			k = i + 1;
			l = i;
			for (j = i - 1; v[j] == '0' || v[j] == '1' || v[j] == '2' || v[j] == '3' || v[j] == '4' || v[j] == '5' || v[j] == '6' || v[j] == '7' || v[j] == '8' || v[j] == '9' || v[j] == '.'; j--, l--)
			{
				fs[j] = v[j];
			}
			if ( j >= 0 )
			{
				for (; j >= 0; j--)
				{
					fs[j] = '0';
				}
			}
			f = atof(fs);
			if (v[i] == '!')
			{
				for (j = 1, r = 1; j <= f ; j++)
				{
					r *= j;
				}
			}
			else if (v[i] == '^')
			{
					for (j = 0; v[k] == '0' || v[k] == '1' || v[k] == '2' || v[k] == '3' || v[k] == '4' || v[k] == '5' || v[k] == '6' || v[k] == '7' || v[k] == '8' || v[k] == '9' || v[k] == '.'; k++, j++)
				{
					ss[j] = v[k];
				}
				s = atof(ss);
				r = pow(f,s);
			}
			sprintf(ts, "%.5f", r);
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
			for (j = 0;j < 100; j++)
			{
				v[j] = '\0';
			}
			for (j = 0;j < strlen(v1); j++)
			{
				v[j] = v1[j];
			}
			v[j] = 'q';
			for (j = j+1; j < 100; j++)
			{
				v[j] = '\0';
			}
			for (j = 0;j < 100; j++)
			{
				v1[j] = '\0';
				fs[j] = '\0';
				ss[j] = '\0';
				ts[j] = '\0';
			}
			i = 0;
			j = 0;
			k = 0;
			l = 0;
			f = 0;
			s = 0;
			r = 0;
		}
	}
	for (i = 0; v[i] != 'q'; i++)
	{
		if (v[i] == 'p' || v[i] == 'e')
		{
			if (v[i] == 'p')
			{
				r = 3.14159;
			}
			else if (v[i] == 'e')
			{
				r = 2.71828;
			}
			sprintf(ts, "%.5f", r);
			for (j = 0; j < i; j++)
			{
				v1[j] = v[j];
			}
			for (l = 0; l < strlen(ts); l++, j++)
			{
				v1[j] = ts[l];
			}
			for (k = i+1; k < (strlen(v)-1); k++, j++)
			{
				v1[j] = v[k];
			}
			for (j = 0;j < 100; j++)
			{
				v[j] = '\0';
			}
			for (j = 0;j < strlen(v1); j++)
			{
				v[j] = v1[j];
			}
			v[j] = 'q';
			for (j = j+1; j < 100; j++)
			{
				v[j] = '\0';
			}
			for (j = 0;j < 100; j++)
			{
				v1[j] = '\0';
				fs[j] = '\0';
				ss[j] = '\0';
				ts[j] = '\0';
			}
			i = 0;
			j = 0;
			k = 0;
			l = 0;
			f = 0;
			s = 0;
			r = 0;
		}
	}
	for (i = 0; v[i] != 'q'; i++)
	{
		if (v[i] == '/' || v[i] == '*' || v[i] == '%' || v[i] == 'r')
		{
			l = i;
			for (j = i - 1; v[j] == '0' || v[j] == '1' || v[j] == '2' || v[j] == '3' || v[j] == '4' || v[j] == '5' || v[j] == '6' || v[j] == '7' || v[j] == '8' || v[j] == '9' || v[j] == '.'; j--, l--)
			{
				fs[j] = v[j];
			}
			if ( j >= 0 )
			{
				for (; j >= 0; j--)
				{
					fs[j] = '0';
				}
			}
			f = atof(fs);
			if (v[i+1] == '+')
			{
				v[i+1] = '0';
				for (j = 0, k = i + 1; v[k] == '0' || v[k] == '1' || v[k] == '2' || v[k] == '3' || v[k] == '4' || v[k] == '5' || v[k] == '6' || v[k] == '7' || v[k] == '8' || v[k] == '9' || v[k] == '.'; k++, j++)
				{
					ss[j] = v[k];
				}
				s = atof(ss);
			}
			else if (v[i+1] == '-')
			{
				v[i+1] = '0';
				for (j = 0, k = i + 1; v[k] == '0' || v[k] == '1' || v[k] == '2' || v[k] == '3' || v[k] == '4' || v[k] == '5' || v[k] == '6' || v[k] == '7' || v[k] == '8' || v[k] == '9' || v[k] == '.'; k++, j++)
				{
					ss[j] = v[k];
				}
				s = atof(ss)*-1;
			}
			else
			{
				for (j = 0, k = i + 1; v[k] == '0' || v[k] == '1' || v[k] == '2' || v[k] == '3' || v[k] == '4' || v[k] == '5' || v[k] == '6' || v[k] == '7' || v[k] == '8' || v[k] == '9' || v[k] == '.'; k++, j++)
				{
					ss[j] = v[k];
				}
				s = atof(ss);
			}
			if (v[i] == '/')
			{
				r = f / s;
			}
			else if (v[i] == '*')
			{
				r = f * s;
			}
			else if (v[i] == '%')
			{
				r = (f * s)/100;
			}
			else if (v[i] == 'r')
			{
				r = (long int) f % (long int) s;
			}
			sprintf(ts, "%.5f", r);
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
			for (j = 0;j < 100; j++)
			{
				v[j] = '\0';
			}
			for (j = 0;j < strlen(v1); j++)
			{
				v[j] = v1[j];
			}
			v[j] = 'q';
			for (j = j+1; j < 100; j++)
			{
				v[j] = '\0';
			}
			for (j = 0;j < 100; j++)
			{
				v1[j] = '\0';
				fs[j] = '\0';
				ss[j] = '\0';
				ts[j] = '\0';
			}
			i = 0;
			j = 0;
			k = 0;
			l = 0;
			f = 0;
			s = 0;
			r = 0;
		}
	}
	for (i = 0; v[i] != 'q'; i++)
	{
		if (v[i] == '+' || v[i] == '-')
		{
			l = i;
			for (j = i - 1; v[j] == '0' || v[j] == '1' || v[j] == '2' || v[j] == '3' || v[j] == '4' || v[j] == '5' || v[j] == '6' || v[j] == '7' || v[j] == '8' || v[j] == '9' || v[j] == '.'; j--, l--)
			{
				fs[j] = v[j];
			}
			if ( j >= 0 )
			{
				for (; j >= 0; j--)
				{
					fs[j] = '0';
				}
			}
			f = atof(fs);
			if (l == 1 && v[0] == '+')
			{
				f = f*1;
				v[0] = '0';
			}
			else if (l == 1 && v[0] == '-')
			{
				f = f*-1;
				v[0] = '0';
			}
			for (j = 0, k = i + 1; v[k] == '0' || v[k] == '1' || v[k] == '2' || v[k] == '3' || v[k] == '4' || v[k] == '5' || v[k] == '6' || v[k] == '7' || v[k] == '8' || v[k] == '9' || v[k] == '.'; k++, j++)
			{
				ss[j] = v[k];
			}
			s = atof(ss);
			if (v[i] == '+')
			{
				r = f + s;
			}
			else if (v[i] == '-')
			{
				r = f - s;
			}
			sprintf(ts, "%.5f", r);
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
			for (j = 0;j < 100; j++)
			{
				v[j] = '\0';
			}
			for (j = 0;j < strlen(v1); j++)
			{
				v[j] = v1[j];
			}
			v[j] = 'q';
			for (j = j+1; j < 100; j++)
			{
				v[j] = '\0';
			}
			for (j = 0;j < 100; j++)
			{
				v1[j] = '\0';
				fs[j] = '\0';
				ss[j] = '\0';
				ts[j] = '\0';
			}
			i = 0;
			j = 0;
			k = 0;
			l = 0;
			f = 0;
			s = 0;
			r = 0;
		}
	}
	r = atof(v);
	return r;
}