#ifndef LISTEL_H_
#define LISTEL_H_
#include <memory>
#include "../header/Rhomb.h"
template<typename T>
class StackEl {
public:
	StackEl(const T& val, const std::shared_ptr<StackEl>& next);
	T val;
	std::shared_ptr<StackEl> next;
};
#endif // LISTEL_H_

