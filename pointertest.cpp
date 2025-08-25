#include <iostream>
#include <memory>

int main() {
    std::unique_ptr p = std::make_unique <int> (5); // to make array do: std::unique_ptr ptr = std::make_unique <char[]> (size of array);
    std::unique_ptr <int> ptr(new int(10)); // to make array do: std::unique_ptr <char[]> ptr(new char[size of array]);
    std::shared_ptr point = std::make_shared <int> (15); // same as above, just change names to shared_ptr
    std::shared_ptr <int> pointer(new int(20)); // same as above, just change names to shared_ptr
    int *pointers = (int*)malloc(sizeof(int)); // by default is 0, it is works with '(type)' and with `static_cast<type>`
    *pointers = 25; 
    int *pointerito = new int(30); // if you do 'new int' it will be 0 by default

    std::cout << *p << std::endl;
    std::cout << *ptr << std::endl;
    std::cout << *point << std::endl;
    std::cout << *pointer << std::endl;
    std::cout << *pointers << std::endl;
    std::cout << *pointerito << std::endl;
    free(pointers); // no memory leak
    delete(pointerito); // no memory leak
    // if was array you needed to do: delete []arr
}
