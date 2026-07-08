#ifndef COUNTER_H
#define COUNTER_H

class Counter {
public:
    Counter();
    explicit Counter(int initial_value);

    void increment();
    void decrement();
    int get_value() const;

private:
    int value_;
};

#endif // COUNTER_H
