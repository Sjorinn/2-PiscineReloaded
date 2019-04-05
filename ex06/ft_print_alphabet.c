/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:03:58 by pchambon          #+#    #+#             */
/*   Updated: 2018/11/06 15:28:14 by pchambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	ntmantoine;

	ntmantoine = 'a';
	while (ntmantoine <= 'z')
	{
		ft_putchar(ntmantoine);
		ntmantoine++;
	}
}
