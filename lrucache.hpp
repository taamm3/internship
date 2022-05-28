#ifndef LRUCACHE_HPP
#define LRUCACHE_HPP
#include "cache.hpp"

class LRUCache: public Cache
{
    private:
        LRUCache();
        int size;
    public:
        LRUCache(t_list *lst, int cp);
        ~LRUCache();
        void set(int key, int value);
};

#endif