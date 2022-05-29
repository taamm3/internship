#include "lrucache.hpp"

LRUCache::LRUCache(){}

LRUCache::LRUCache(t_list *lst, int cp): Cache(lst,cp) {}

LRUCache::~LRUCache(){}

void LRUCache::update(int key)
{
    int value;
    t_list *el = mp(key, head);
    if(!el)
        return ;
    if(el != head)
    {
        if(el == tail)
            tail = tail->prev;
        value = el->value;
        ft_lstdel(&head, el);
        ft_lstadd_front(&head, key, value);
    }
}
