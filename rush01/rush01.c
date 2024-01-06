/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:12:48 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/23 17:13:04 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*Se os números fora do quadro são a, b, c, d (vistos da esquerda) e e, f, g, h 
(vistos da direita), então a expressão seria linha 
x<a,y<b,z<c,w<d e w<e,z<f,y<g,x<h.*/

/*Se os números fora do quadro são a, b, c, d (vistos de cima) e e, f, g, h 
(vistos de baixo), então a expressão seria: 
x<a,y<b,z<c,w<d e 
w<e,z<f,y<g,x<h.*/


