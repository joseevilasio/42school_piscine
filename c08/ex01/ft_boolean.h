#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H
#include <unistd.h>
#define  EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."
#define SUCCESS 1
typedef enum { FALSE, TRUE } t_bool;

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);
int EVEN(int nbr);

int EVEN(int nbr)
{
    return (nbr);
}

#endif //FT_BOOLEAN_H
