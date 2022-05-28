#include "cache.hpp"

Cache::Cache(){}

Cache::~Cache(){}

Cache::Cache(t_list *lst, int cp)
{
    this->cp = cp;
    head = lst;

    t_list *tmp = lst;
    while(tmp->next)
        tmp = tmp->next;
    tail = tmp;
}

        
int Cache::get(int key)
{
    t_list *el = find_element(key, head);
    if (!el)
        return -1;
    else
        return el->value;
}