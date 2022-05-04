#include "handle_impl.h"
#include <iostream>

HandleImpl::HandleImpl()
{
    std::cout << "Impl created\n";
}

HandleImpl::~HandleImpl()
{
    std::cout << "Impl destructed\n";
}
