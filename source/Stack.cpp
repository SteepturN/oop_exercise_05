#include "../header/Rhomb.h"
#include "../header/Stack.h"
#include "../header/StackEl.h"
#include "../header/iterator.h"
//""
template <typename T> Stack<T>::Stack()
	: zero_el(new StackEl<T>(T(), nullptr)), end_el(zero_el), size(0){}

template <typename T> Stack<T>::~Stack() {
	zero_el = nullptr;
	end_el = nullptr;
}
template <typename T> typename Stack<T>::iterator Stack<T>::begin() {
	return iterator(zero_el);
}
template <typename T> typename Stack<T>::iterator Stack<T>::end() {
	return iterator(end_el);
}

template <typename T> void Stack<T>::insert(const T& t, Stack<T>::iterator i) { //inserts before
	if(i == nullptr) throw std::invalid_argument("null iterator");
	auto cur = i.prev_el.lock();
	cur->next =
		std::make_shared<StackEl<T>>(t, cur->next);
	if(cur == end_el) end_el = cur->next;
	++size;
}
template <typename T> void Stack<T>::erase(iterator i) {
	if(i == nullptr) throw std::invalid_argument("null iterator");
	auto cur = i.prev_el.lock();
	if(cur->next == end_el) end_el = cur;
	cur->next = cur->next->next;
	--size;
}
template <typename T> T Stack<T>::pop() {
	if(zero_el->next == nullptr) throw std::out_of_range("empty stack");
	T element = *(begin());
	erase(begin());
	return element;
}
template <typename T> void Stack<T>::push(const T& el) {
	insert(el, begin());
}
template <typename T> T Stack<T>::top() /*const*/{
	if(zero_el->next == nullptr) throw std::out_of_range("empty stack");
	T el = *(begin());
	return el;
}
template <typename T> std::ostream& operator<<(std::ostream& cout, Stack<T>& stack) {
    for(auto i = stack.begin(); i != stack.end(); ++i) {
        cout << *i << '\n';
    }
    return cout;
}
