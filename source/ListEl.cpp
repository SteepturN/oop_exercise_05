#include "../header/ListEl.h"
#include "../header/Triangle.h"


ListEl::ListEl(ListEl* next, Triangle& t)
    : next(next), t(t) {}
ListEl::ListEl(ListEl* next, Triangle&& t)
    : next(next), t(t) {}
