#ifndef CACHE_HPP
#define CACHE_HPP
#include "lists.hpp"

class Cache
{
    private:
    protected:
        int cp;
        t_list *head;
        t_list *tail;
    public:
        Cache();
        Cache(t_list *lst, int cp);
        ~Cache();
        t_list *mp(int key, t_list *lst);
        virtual void set(int key, int value) = 0;
        int get(int key);
};


#endif