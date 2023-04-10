#include <iostream>

struct str_lex//структура лексемы
{
    int label;
    int TL;
    int next;
    bool is_empty;
};

class TS
{
    str_lex* Table;//строка
    size_t size;
public:
    void add(int key,int value);//добавление элемента
    int find(int key);// поиск элемента
    void del(int key);// удаление элемента
    void print();// вывод
    TS();
    ~TS();
    int find_empty(size_t i,size_t j);
};