/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ishaimou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 05:37:10 by ishaimou          #+#    #+#             */
/*   Updated: 2019/05/26 05:37:11 by ishaimou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	int		i;

	if (s && f)
	{
		i = 0;
		while (s[i])
		{
			(*f)(&s[i]);
			i++;
		}
	}
}
