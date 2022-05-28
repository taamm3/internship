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
        void mp(int key, int value);
        void set(int key, int value);
};

#endif