#include "lrucache.hpp"
#include <string>

int main()
{
    int count, cp;
    int key, value;
    std::string str;
    t_list *list = NULL;
    std::cin>>count>>cp;
    LRUCache lru(list, cp);
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
        }

    }
    return 0;
}