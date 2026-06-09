#include <iostream>

int main()
{

    /*
    //int * data = new int[10000000000000000]; //

    for(size_t i{0} ; i < 10000000 ; ++i){
        int * data = new int[100000000];
    }
    */

    // exception
    /*
     for(size_t i{0} ; i < 100 ; ++i){
         try{
             int * data = new int[1000000000];
         }catch(std::exception& ex){
             std::cout << "  Something went wrong : " << ex.what() << std::endl;
         }
     }
     */

    // std::nothrow
    for (size_t i{0}; i < 100; ++i)
    {

        int *data = new (std::nothrow) int[1000000000];

        if (data != nullptr)
        {
            std::cout << "Data allocated" << std::endl;
        }
        else
        {
            std::cout << "Data allocation failed" << std::endl;
        }
    }

    // Verbose nullptr check
    std::cout << std::endl;
    std::cout << "Verbose nullptr check: " << std::endl;

    int *p_number{}; // Initialized to nullptr
    // p_number = new int(7);

    /*
    if(!(p_number==nullptr)){
        std::cout << "p_number points to a VALID address : "<< p_number << std::endl;
        std::cout << "*p_number : " << *p_number << std::endl;
    }else{
        std::cout << "p_number points to an INVALID address." << std::endl;
    }
    */
    if (p_number)
    {
        std::cout << "p_number points to a VALID address : " << p_number << std::endl;
        std::cout << "*p_number : " << *p_number << std::endl;
    }
    else
    {
        std::cout << "p_number points to an INVALID address." << std::endl;
    }

    delete p_number;
    nullptr;

    // It is OK call delete on a nullptr
    // Calling delete on a nullptr is OK
    int *p_number1{};

    delete p_number1; // This won't cause any problem
                      // if p_number1 contains nullptr

    // if(p_number1 != nullptr){
    //     delete p_number1;
    // }

    /*
    int *p_number {new int{67}}; // Points to some address, let's call that address1

    //Should delete and reset here

    int number{55}; // stack variable

    p_number = &number; // Now p_number points to address2 , but address1 is still in use by
                        // our program. But our program has lost access to that memory location.
                        //Memory has been leaked.
    */

    // Double allocation
    /*
    int *p_number1 {new int{55}};

    //Use the pointer

    //Should delete and reset here.

    p_number1 = new int{44}; // memory with int{55} leaked.

    delete p_number1;
    p_number1 = nullptr;
    */

    // Nested scopes with dynamically allocated memory
    {
        int *p_number2{new int{57}};

        // Use the dynamic memory
    }
    // Memory with int{57} leaked.

    std::cout << "Program ending well" << std::endl;

    return 0;
}