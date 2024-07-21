#ifndef _SUBLIB2_
#define _SUBLIB2_

#include <iostream>

class sub2
{
private:

public:
    sub2();
    ~sub2();
    void print();
};

sub2::sub2()
{
}

sub2::~sub2()
{
}

void sub2::print(){
    std::cout << "hello from sublib2. i have just one header file" <<  std::endl;
}


#endif