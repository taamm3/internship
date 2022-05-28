#include "lrucache.hpp"

LRUCache::LRUCache(){}

LRUCache::LRUCache(t_list *lst, int cp): Cache(lst,cp)
{
    t_list *tmp = lst;
    while(tmp)
    {
        size++;
        tmp = tmp->next;
    }
}

LRUCache::~LRUCache(){}

void LRUCache::set(int key, int value)
{
    t_list *el = mp(key, head);
    if(!el)
    {
        if (size >= cp)
        {
            tail = tail->prev;
            ft_lstdel(&head, tail->next);
            size--;
        }
    }
    else
    {
        if(!el->next)
            tail = tail->prev;
        ft_lstdel(&head, el);   
    }
    ft_lstadd_front(&head, key, value);
    size++;
}