#ifndef _TEST_CLASS_H_
#define _TEST_CLASS_H_
class testClass
{
public:
    testClass();
    virtual ~testClass();
    
    void OutputMethodNoArgs();
    void OutputMethodWithArgs( const std::string& stringIn );
    
    int newDivideSub( int value, int divisor );
    int newDivideBin( int value, int divisor );
};  // end testClass

#endif