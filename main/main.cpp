#include "bar.h"
#include "Example.hpp"

int main(int argc, char *argv[])
{
    Bar bar;
    Foo foo(bar);
    foo.baz(true);
    foo.baz(false);
}
