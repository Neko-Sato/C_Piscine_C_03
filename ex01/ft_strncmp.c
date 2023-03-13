/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:12:21 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/13 16:12:21 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	result;

	result = 0;
	while (*s1 && *s2 && n--)
	{
		if (*s1 != *s2)
		{
			result = 1 - 2 * (*s1 < *s2);
			break ;
		}
		s1++;
		s2++;
	}
	return (result);
}
