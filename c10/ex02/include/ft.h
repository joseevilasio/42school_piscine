/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 20:05:10 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/21 21:40:03 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>
# include <stdlib.h>
# include <stddef.h>
# define SIZE 30720

void	ft_putstr(char *str);
void	ft_putstr_tail(char *str, int *pt_size);
char	*ft_read(char *file);
int		ft_countline(char *str);
int		ft_argparser(int argc, char **argv, int *pt_jump, int *pt_size);
int		ft_str_is_numeric(char *str);
int		ft_atoi(char *str);
int		ft_jump(int i, int *pt_jump);
void	ft_msgerror(int type, char *str);
int		ft_strlen(char *str);
char	*ft_strdup(char *src);
void	ft_putheader(char *str);
void	ft_tail(int argc, char **argv, int *pt_jump, int *pt_size);

#endif //FT_H
