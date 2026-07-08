#include "counter.h"

Counter::Counter() : value_(1) {}

Counter::Counter(int initial_value) : value_(initial_value) {}

void Counter::increment() {
    ++value_;
}

void Counter::decrement() {
    --value_;
}

int Counter::get_value() const {
    return value_;
}
