/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 20:05:10 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/22 19:37:36 by josejunior       ###   ########.fr       */
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
void	ft_putheader(char *str, int index);
void	ft_tail(int argc, char **argv, int *pt_jump, int *pt_size);
void	ft_putnstr(char *str, int *pt_size);
void	ft_msgerror(int type, char *str);
char	*ft_read(char *file);
char	*ft_strdup(char *src);
int		ft_countline(char *str);
int		ft_argparser(int argc, char **argv, int *pt_jump, int *pt_size);
int		ft_str_is_numeric(char *str);
int		ft_atoi(char *str);
int		ft_jump(int i, int *pt_jump);
int		ft_strlen(char *str);
int		ft_arraylen(int *array);
int		ft_setoption_arg(char **argv, int *pt_jump, int *pt_size, int i);
int		ft_setoption_str(char **argv, int *pt_jump, int *pt_size, int i);

#endif //FT_H
