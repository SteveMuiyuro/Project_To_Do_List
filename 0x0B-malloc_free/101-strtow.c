#include "main.h"
/**
  *strtow - is a function that returns a pointer to
  *an array of strings (words)
  *@str: is the pointer to a string array
  *Return:returns a pointer to an array of strings
  *(words) or NULL if str == NULL or str == ""
  */
char **strtow(char *str)
{
		int i, j, k, l, m = 0, wc = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	m = wrdcnt(str);
	if (m == 1)
		return (NULL);
	w = (char **)malloc(m * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[m - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			w[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (w[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(w[k]);
				free(w[m - 1]);
				free(w);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				w[wc][l] = str[i + l];
			w[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (w);
}
