#ifndef ITERATOR_H_
#define ITERATOR_H_
#include "../header/ListEl.h"
#include "../header/List.h"
#include "../header/Triangle.h"
class Iterator {
public:
    const List* list;
    ListEl** el;
    Iterator();
    Iterator(List*);
    Iterator(const List*, ListEl**);
    Iterator& operator++();
    Triangle& operator*();
    bool operator!=(Iterator iter);
    bool operator==(Iterator);
};

#endif // ITERATOR_H_
