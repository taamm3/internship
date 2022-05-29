#include "cache.hpp"

Cache::Cache(){}

Cache::~Cache(){}

Cache::Cache(t_list *lst, int cp)
{
    size = 0;
    this->cp = cp;
    head = lst;

    t_list *tmp = lst;
    if(tmp)
    {
        while(tmp->next)
        {
            size++;
            tmp = tmp->next;
        }
        size++;
    }
    tail = tmp;
}

t_list *Cache::mp(int key, t_list *lst)
{
	t_list	*tmp = lst;

	while (tmp)
	{
		if (key == tmp->key)
			return tmp;
		tmp = tmp->next;
	}
	return NULL;
}

void Cache::set(int key, int value)
{
    t_list *el = mp(key, head);
    if(!el)
    {
        if (size >= cp)
        {
            tail->key = key;
            tail->value = value;
            size--;
        }
        else
            ft_lstadd_front(&head, key, value);
        if(!tail)
            tail = head;
    }
    else
        el->value=value;
    size++;
}
        
int Cache::get(int key)
{
    t_list *el = mp(key, head);
    if (!el)
        return -1;
    else
        return el->value;
}