#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	if (needle[i] == '\0')
		return ((char*)haystack);
	ptr = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			ptr = (char*)&haystack[i];
			while (haystack[i + j] == needle[j] && j < len - i)
			{
				if (needle[j + 1] == '\0')
					return (ptr);
				j++;
			}
			ptr = 0;
		}
		i++;
	}
	return (ptr);
}
