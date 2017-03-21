/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free1_join_char.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 02:49:58 by bbrunell          #+#    #+#             */
/*   Updated: 2017/02/07 02:50:00 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_join(char *join, const char *s1, const char *s2, char c)
{
	int i;
	int j;

	if (join == NULL)
		return (NULL);
	i = 0;
	while (s1 != NULL && s1[i] != '\0')
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 != NULL && s2[j] != '\0')
	{
		join[i] = s2[j];
		i++;
		j++;
	}
	join[i] = (c == 0) ? '\0' : c;
	if (c != 0)
		join[i + 1] = '\0';
	return (join);
}

char		*ft_free1_join_char(char *s1, char *s2, char c)
{
	int		j;
	char	*join;
	char	*tmp;

	j = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL)
		j = ft_strlen(s2);
	else if (s2 == NULL)
		j = ft_strlen(s1);
	else
		j = ft_strlen(s1) + ft_strlen(s2);
	tmp = s1;
	j = (c == 0) ? j : j + 1;
	join = (char*)malloc(sizeof(char) * (j + 1));
	if (!join)
		return (NULL);
	join = ft_join(join, s1, s2, c);
	ft_strdel(&tmp);
	return (join);
}
