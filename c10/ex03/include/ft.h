/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 20:05:10 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/29 21:22:29 by josejunior       ###   ########.fr       */
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
# include <stdio.h>
# include <stdint.h>
# define SIZE 30720

void	ft_putstr(char *str);
void	ft_putstr_pipe(char *str);
void	ft_dump(char *str, int *pt_size);
void	ft_control(int argc, char **argv, int *pt_jump, int *pt_size);
void	ft_msgerror(int type, char *str);
void	ft_print_hex(int n);
void	ft_putstrhex(char *str, int *option);
void	ft_putnchar(char c, int n);
void	ft_print_memory(int i);
char	*ft_read(char *file);
char	*ft_strndup(char *src, unsigned int size);
int		ft_char_is_printable(char c);
int		ft_argparser(int argc, char **argv, int *pt_jump, int *option);
int		ft_atoi(char *str);
int		ft_jump(int i, int *pt_jump);
int		ft_strlen(char *str);

#endif //FT_H
