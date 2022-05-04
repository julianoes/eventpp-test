#include <iostream>

#include "widget.h"

int main(int, char* [])
{
    Widget<void()> widget;

    {
        std::cout << "Construct handle\n";
        auto handle = widget.subscribe((std::function<void()>)[]() { std::cout << "Callback called\n"; });

        widget.call();

        (void)handle;
        std::cout << "Destruct handle\n";
    }
    std::cout << "Handle destructed\n";

    widget.call();

    return 0;
}
