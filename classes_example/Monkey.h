#ifndef MONKEY_H_
#define MONKEY_H_
#include <string>

class Monkey
{

private:
    bool angry;

public:
    void dance();
    void eat();
    std::string selection();
};

#endif /* MONKEY_H_ */