/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwyl-the <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 20:46:52 by lwyl-the          #+#    #+#             */
/*   Updated: 2018/11/20 15:58:49 by lwyl-the         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void		ft_putstr(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		ft_putchar(*ptr);
		ptr++;
	}
}

void		buble(int argc, char **argv)
{
	int		i;
	int		j;
	char	*a;

	i = 1;
	while (i <= argc)
	{
		j = argc - 1;
		while (j > i)
		{
			if (ft_strcmp(argv[j - 1], argv[j]) > 0)
			{
				a = argv[j - 1];
				argv[j - 1] = argv[j];
				argv[j] = a;
			}
			j--;
		}
		i++;
	}
}

int			main(int argc, char **argv)
{
	int		a;

	a = 1;
	buble(argc, argv);
	while (a < argc)
	{
		ft_putstr(argv[a]);
		ft_putchar('\n');
		a++;
	}
	return (0);
}
