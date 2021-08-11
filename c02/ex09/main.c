
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char str1[] = "saludos, como lo llevas ? 42urduliz cluster-uno; fila+ordenador+uno";
	
	char str2[] = " sALuDos, CoMo lo LLEVAS ? 42Urduliz CLuster-uNO; fIlA+ORDENADOR+uno";

	char empty[] = "";

	printf("\n-----\nBEF = %s", str1);
	printf("\nAFT = %s\n", ft_strcapitalize(str1));
	printf("\nBEF = %s", str2);
	printf("\nAFt = %s\n", ft_strcapitalize(str2));
	printf("\nEmpty = %s\n-----\n", ft_strcapitalize(empty));

}
