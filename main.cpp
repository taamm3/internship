#include "lrucache.hpp"
#include <string>

int main()
{
    int count, cp;
    int key, value;
    std::string str;
    t_list *lst = NULL;
    do
    {
        std::cout<<"Enter the number of lines(N) and the capacity(M) of the cache[1 <= N <= 500000, 1 <= M <= 1000]: ";
        std::cin>>count>>cp;
    }
    while(count <= 0 || count > 500000 || cp <= 0 || cp > 1000);
    LRUCache lru(lst, cp);
    for(int i = 0; i < count; i++)
    {
        std::cin>>str;
        if(str == "set")
        {
            std::cin>>key>>value;
            lru.set(key, value);
        }
        else if(str == "get")
        {
            std::cin>>key;
            std::cout<<lru.get(key)<<std::endl;
            lru.update(key);
        }
    }
    ft_delete_list(lst);
    return 0;
}