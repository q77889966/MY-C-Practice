#include<stdio.h>
#include<string.h>
int main()
{
	char num_1[9999] = { 0 };
	char num_2[9999] = { 0 };
	int result[9999] = { 0 };
	int t1[9999] = { 0 };
	int t2[9999] = { 0 };
	int len_max = 0, len_1 = 0, len_2 = 0, i, j;

	scanf("%s %s", &num_1, &num_2);
	len_1 = strlen(num_1);
	len_2 = strlen(num_2);

	if (len_1 > len_2)
		len_max = len_1 - 1;
	else
		len_max = len_2 - 1;

	for (i = 0, j = len_1 - 1; j >= 0; i++, j--)
		t1[i] = num_1[j] - '0';

	for (i = 0, j = len_2 - 1; j >= 0; i++, j--)
		t2[i] = num_2[j] - '0';

	for (i = 0; i < len_max + 1; i++)
	{
		result[i] = result[i] + t1[i] + t2[i];
		if (result[i] > 9)
		{
			result[i + 1]++;
			result[i] -= 10;
		}
	}

	if (result[len_max + 1] > 0)
		len_max++;


	for (i = len_max; i >= 0; i--)
		printf("%d", result[i]);
	return 0;

}