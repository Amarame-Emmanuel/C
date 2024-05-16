#include <iostream>
#include <vector>

int main() {
    std::vector<int> myVector = {1, 2, 3, 4, 5};
    std::vector<int>::iterator itr = myVector.begin();

    std::cout << *itr << std::endl;   // Output: 1
    std::cout << *(++itr) << std::endl; // Output: 1, and then itr is incremented
    std::cout << *itr << std::endl;   // Output: 2

    return 0;
}
