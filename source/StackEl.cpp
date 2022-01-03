#include "../header/StackEl.h"
#include "../header/Rhomb.h"
template<typename T>
StackEl<T>::StackEl(const T& val, const std::shared_ptr<StackEl>& next)
	: val(val), next(next){}

#include "../header/StackEl.tpp"
