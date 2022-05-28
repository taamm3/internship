#include "cache.hpp"

Cache::Cache(){}

Cache::~Cache(){}

Cache::Cache(t_list *lst, int cp)
{
    this->cp = cp;
    head = lst;

    t_list *tmp = lst;
    while(tmp && tmp->next)
        tmp = tmp->next;
    tail = tmp;
}

t_list *Cache::mp(int key, t_list *lst)
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
        
int Cache::get(int key)
{
    t_list *el = mp(key, head);
    if (!el)
        return -1;
    else
        return el->value;
}