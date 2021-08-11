#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main()
{
	char s1[] = "Muy bien";
	char s2[] = "Hola que tal";
	char s3[] = "Hola";

	printf("s12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d", ft_strncmp(s1, s2, 5), ft_strncmp(s2, s1, 5), ft_strncmp(s1, s3, 5), ft_strncmp(s3, s1, 5), ft_strncmp(s2, s3, 5), ft_strncmp(s3, s2, 5));
	printf("\n\ns12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d", strncmp(s1, s2, 5), strncmp(s2, s1, 5), strncmp(s1, s3, 5), strncmp(s3, s1, 5), strncmp(s2, s3, 5), strncmp(s3, s2, 5));
}
