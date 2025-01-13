#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*final;

	i = 0;
	final = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (final == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		final[i] = f(i, s[i]);
		i++;
	}
	final[i] = '\0';
	return (final);
}