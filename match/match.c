/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osegobae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 10:30:34 by osegobae          #+#    #+#             */
/*   Updated: 2020/02/23 12:20:39 by osegobae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	match(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s2[i])
	{
		if (s2[i] == '*')
			return 1;
		else
			++i;
	}
	i = 0;
	while (s1[i])
	{
		if (s1[i] == s2[i] && s1[i + 1] == s2[i + 1])
		{
			j = 1;
			++i;
		}
		else
		{
			j = 0;
			++i;
		}
	}
	return (j);
}
