/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:07:39 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/13 16:30:23 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *_dest;

	_dest = dest;
	while (*dest)
		dest++;
	while (*src)
		*(dest++) = *(src++);
	*dest = '\0';
	return (_dest);
}