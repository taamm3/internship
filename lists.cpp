#include "lists.hpp"

t_list	*find_element(int key, t_list *lst)
{
	t_list	*tmp = lst;

	while (tmp)
	{
		if (key == tmp->key)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}

void	ft_lstadd_front(t_list **lst, int data)
{
    struct node* newNode = new node;
    newNode->key = data;
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