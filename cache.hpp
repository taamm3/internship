#ifndef CACHE_HPP
#define CACHE_HPP
#include "lists.hpp"

class Cache
{
    protected:
        int cp;
        t_list *head;
        t_list *tail;
        int size;
    public:
        Cache();
        Cache(t_list *lst, int cp);
        ~Cache();
        t_list *mp(int key, t_list *lst);
        void set(int key, int value);
        int get(int key);
        virtual void update(int key) = 0;
};

#endif