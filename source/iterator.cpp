#include "../header/Stack.h"
#include "../header/StackEl.h"
#include "../header/iterator.h"
#include <memory>
template <typename T> Stack<T>::iterator::iterator()
	: prev_el(std::shared_ptr<StackEl<T>>(nullptr)) {}
template <typename T>
typename Stack<T>::iterator& Stack<T>::iterator::operator++() {
	if(!prev_el.expired())
		prev_el = prev_el.lock()->next;
	else {
		throw std::bad_weak_ptr();
	}
	return *this;
}
template <typename T> Stack<T>::iterator::iterator(std::shared_ptr<StackEl<T>> el)
	: prev_el(el) {}
template <typename T> bool Stack<T>::iterator::operator!=(Stack<T>::iterator iter) {
	if(iter.prev_el.lock() == nullptr || prev_el.lock() == nullptr)
		throw std::bad_weak_ptr();
	return (prev_el.lock()->next != iter.prev_el.lock()->next);
} //should I compare stacks?
template <typename T> T& Stack<T>::iterator::operator*() {
	if(!prev_el.expired()) {
		std::shared_ptr<StackEl<T>> prev = prev_el.lock();
		if(prev->next == NULL)
			throw std::out_of_range("iterator out of range");
		else return prev->next->val;
	} else throw std::bad_weak_ptr();
}
template <typename T> bool Stack<T>::iterator::operator==(iterator iter) {
	return !(*this != iter);
}
template <typename T> bool Stack<T>::iterator::operator==(std::nullptr_t) {
	return (prev_el.lock() == nullptr);
}
