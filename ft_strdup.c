#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	size;
	char	*new_str;

	i = 0;
	size = ft_strlen(s);
	new_str = malloc((size + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}