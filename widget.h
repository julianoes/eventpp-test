#pragma once

#include <functional>
#include "handle.h"
#include "eventpp/callbacklist.h"

template <typename Prototype>
class Widget {
public:
    Handle<Prototype> subscribe(std::function<Prototype> callback)
    {
        return Handle<Prototype>(_list, callback);
    }

    void call() {
        _list();
    }

private:
    typename eventpp::CallbackList<Prototype> _list;
};

