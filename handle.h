#pragma once

#include <iostream>
#include <eventpp/callbacklist.h>
#include <eventpp/utilities/scopedremover.h>

class HandleImpl;

template <typename Prototype>
class Handle {
public:
    explicit Handle(typename eventpp::CallbackList<Prototype>& list, std::function<Prototype> callback) :
        _remover(list)
    {
        _remover.append(callback);

        //_impl = new HandleImpl();
        std::cout << "Created\n";
    }

    ~Handle() {
        //delete _impl;
        std::cout << "Destructed\n";
    }

private:
    typename eventpp::ScopedRemover<eventpp::CallbackList<Prototype>> _remover;
    //HandleImpl* _impl;
};
