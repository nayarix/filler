int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	int				res;
	unsigned char	*ps1;
	unsigned char	*ps2;

	i = 0;
	res = 0;
	ps1 = (unsigned char*)s1;
	ps2 = (unsigned char*)s2;
	while (ps1[i] != '\0' || ps2[i] != '\0')
	{
		if (ps1[i] != ps2[i])
		{
			res = (ps1[i] - ps2[i]);
			break ;
		}
		i++;
	}
	return ((int)res);
}
