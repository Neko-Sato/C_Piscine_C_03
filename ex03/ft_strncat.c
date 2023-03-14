/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:07:39 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/15 06:49:27 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*_dest;

	_dest = dest;
	while (*dest)
		dest++;
	while (*src && nb--)
		*(dest++) = *(src++);
	*dest = '\0';
	return (_dest);
}
