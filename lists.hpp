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

t_list	*find_element(int key, t_list *lst);
void	ft_lstadd_front(t_list **lst, int data);
void	ft_lstdel(t_list **lst, t_list *del);

#endif