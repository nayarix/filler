char	*ft_strrev(char *str)
{
	char	tmp;
	int		i;
	int		j;
	int		n;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	j = 0;
	n = i - 1;
	while (j < n)
	{
		tmp = *(str + j);
		*(str + j) = *(str + n);
		*(str + n) = tmp;
		j++;
		n--;
	}
	return (str);
}
