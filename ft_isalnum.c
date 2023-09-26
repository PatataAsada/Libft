/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:42:43 by yemoreno          #+#    #+#             */
/*   Updated: 2023/09/12 15:42:43 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int character);
int	ft_isdigit(int character);

int	ft_isalnum(int character)
{
	if (ft_isalpha(character) || ft_isdigit(character))
		return (1);
	else
		return (0);
}
