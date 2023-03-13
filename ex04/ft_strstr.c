/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:07:59 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/13 17:55:31 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	result;

	result = 0;
	while (*s1 && *s2)
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

char	*ft_strstr(char *str, char *to_find)
{
	while ( sizeof str - sizeof to_find < 0)
		if (!ft_strncmp(str, to_find))
			return (str);
		else
			str++;
}

int	main(void)
{
	return (0);
}