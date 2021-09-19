//c language
/**1) Programs> 3) Loop> 2) Any Loop> 5) shapes based programs*/
/* 05) pattern of shape z.c*/
//105
//printing z pattern
//COMPLETED
int main()
{
	int j, i;
	for (j = 0; j < 10; j++)
		printf("* ");
	printf("\n");

	for (i = 0; i < 10; i++)
	{
		j = 9 - i;
		while (j > 0)
		{
			printf("  ");
			j--;
		}
		printf("*");
		printf("\n");
	}
	for (j = 0; j < 10; j++)
		printf("* ");

	return 0;
}