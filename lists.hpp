#ifndef LISTS_HPP
#define LISTS_HPP
#include <iostream>

typedef struct node
{
    int             key;
    int             value;
	struct node 	*next;
	struct node 	*prev;
}	t_list;

void	ft_lstadd_front(t_list **lst, int key, int value);
void	ft_lstdel(t_list **lst, t_list *del);

#endif