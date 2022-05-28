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
        virtual void mp(int key, int value) = 0;
        virtual void set(int key, int value) = 0;
        int get(int key);
};


#endif