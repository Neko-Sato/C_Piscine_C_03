/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:12:21 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/16 18:31:57 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n--)
	{
		if (*s1 != *s2++)
			return (*(unsigned char *)s1 - *(unsigned char *)(s2 - 1));
		if (!*s1++)
			break ;
	}
	return (0);
}

#include <string.h>

int	main(void)
{
	int i = ft_strncmp("aasd", "asdgfdf", 2);
	int j = strncmp("aasd", "asdgfdf", 2);
}