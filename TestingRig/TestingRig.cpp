#include <iostream>
#include "testClass.h"

int main()
{
    // testing direct route
   //std::cout << "Hello World" << std::endl;
    
    // testing from string
    //std::string outputString = "Hello World from string";
    //std::cout << outputString << std::endl;
    
    // testing from function call
    testClass newObj;
    //newObj.OutputMethodNoArgs();
    
    //std::string passedString = "Hello World passed into function";
    ///newObj.OutputMethodWithArgs( passedString );

    int start = 16;
    int foo = start>>1;
    std::cout << "start:" << start << "  foo:" << foo << std::endl;
 
    std::cout << "Case 1: 100/4  Divsub: "<< newObj.newDivideSub(100, 4)<< " divbin " << newObj.newDivideBin(100,4)<< std::endl;
    std::cout << "Case 1: 99/4  Divsub: "<< newObj.newDivideSub(99, 4)<< " divbin " << newObj.newDivideBin(99,4)<< std::endl;
    std::cout << "Case 1: 53/7  Divsub: "<< newObj.newDivideSub(53, 7)<< " divbin " << newObj.newDivideBin(53,7)<< std::endl;
    std::cout << "Case 1: -100/4  Divsub: "<< newObj.newDivideSub(-100, 4)<< " divbin " << newObj.newDivideBin(-100,4)<< std::endl;
    std::cout << "Case 1: 100/-4  Divsub: "<< newObj.newDivideSub(100, -4)<< " divbin " << newObj.newDivideBin(100,-4)<< std::endl;
    std::cout << "Case 1: -100/-4  Divsub: "<< newObj.newDivideSub(-100, -4)<< " divbin " << newObj.newDivideBin(-100,-4)<< std::endl;
    std::cout << "Case 1: 100/0  Divsub: "<< newObj.newDivideSub(100, 0)<< " divbin " << newObj.newDivideBin(100,0)<< std::endl;
    
    return 0;
}