#ifndef STACK_H
#define STACK_H
#include <memory>
#include "../header/StackEl.h"
#include "../header/Rhomb.h"
template <typename T>
class Stack {
public:
	//null - > begin
	class iterator;
	std::shared_ptr<StackEl<T>> zero_el;
	std::shared_ptr<StackEl<T>> end_el;
	unsigned int size;

	Stack();
	~Stack();
	iterator begin();
	iterator end();

	void insert(const T& t, iterator i);
	void erase(iterator p);

	T pop();
	void push(const T&);
	T top()/*const*/;

	template <typename Y>
	friend std::ostream& operator<<(std::ostream&, Stack<Y>&);
};
#endif // STACK_H

#include "../header/Stack.tpp"
