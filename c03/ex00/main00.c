#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main()
{
	char s1[] = "Muy bien";
	char s2[] = "Hola que tal?";
	char s3[] = "Hola";

	printf("s12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d", ft_strcmp(s1, s2), ft_strcmp(s2, s1), ft_strcmp(s1, s3), ft_strcmp(s3, s1), ft_strcmp(s2, s3), ft_strcmp(s3, s2));
	printf("\n\ns12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d", strcmp(s1, s2), strcmp(s2, s1), strcmp(s1, s3), strcmp(s3, s1), strcmp(s2, s3), strcmp(s3, s2));
}
