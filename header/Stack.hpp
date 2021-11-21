#ifndef STACK_H_
#define STACK_H_
#include <memory>

class Stack {
    public:
    std::shared_ptr head;
    Stack();
    iterator begin();
    iterator end();
    insert(iterator);
    erase(iterator);
    pop();
    push();
    top();
};

#endif // STACK_H_
