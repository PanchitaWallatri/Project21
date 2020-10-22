#include<stdio.h>
#include<string.h>
int main()
{
	char keyword[20], str[80];
	int match = 0, location = 0, s = 0, k = 0, found = 0;
	printf("Enter string :\n");
	gets_s(str);
	printf("\n");
	printf("Enter keyword :\n");
	gets_s(keyword);
	printf("\n");
	printf("Search Result :\n");
	for (s = 0; (s < (strlen(str) - strlen(keyword))) && (found == 0); s++)
	{
		if ((str[s] == keyword[0]))
		{
			match = 1;
			for (k = 0; k < strlen(keyword); k++)
				if (str[s + k] != keyword[k])match = 0;
			if (match == 1) {
				found = 1; location = s + 1;
			}
		}
	}
	if (location > 0) printf("Found at charater number %d", location);
	else printf("Not Found");
	printf("\n\n");
	return 0;
}