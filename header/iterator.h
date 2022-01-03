#ifndef ITERATOR_H_
#define ITERATOR_H_
#include "../header/StackEl.h"
#include "../header/Stack.h"
#include "../header/Rhomb.h"
#include <memory>
template<typename T>
class Stack<T>::iterator : public std::iterator<std::forward_iterator_tag, T> {
public:
	std::weak_ptr<StackEl<T>> prev_el;
	iterator();
	iterator(std::shared_ptr<StackEl<T>>);
	iterator& operator++();
	T& operator*();
	bool operator!=(iterator);
	bool operator==(iterator);
	bool operator==(std::nullptr_t);
};

template class Stack<Rhomb<int>>::iterator;
#endif // ITERATOR_H_

