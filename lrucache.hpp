#ifndef LRUCACHE_HPP
#define LRUCACHE_HPP
#include "cache.hpp"

class LRUCache: public Cache
{
    private:
        LRUCache();
    public:
        LRUCache(t_list *lst, int cp);
        ~LRUCache();
        void update(int key);
};

#endif