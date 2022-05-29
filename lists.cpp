#include "lists.hpp"

void	ft_lstadd_front(t_list **lst, int key, int value)
{
    struct node* newNode = new node;
    newNode->key = key;
    newNode->value = value;
    newNode->next = *lst;
    newNode->prev = NULL;
	if (*lst)
		(*lst)->prev = newNode;
	*lst = newNode;
}

void	ft_lstdel(t_list **lst, t_list *del)
{
	if (*lst == NULL || del == NULL)
		return ;
	if (*lst == del)
		*lst = del->next;
	if (del->next != NULL)
		del->next->prev = del->prev;
	if (del->prev != NULL)
		del->prev->next = del->next;
	delete del;
}

void	ft_delete_list(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		ft_lstdel(&lst, tmp);
		tmp = lst;
	}
}