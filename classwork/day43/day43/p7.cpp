#include <iostream>
#include <iterator>
#include <vector>
int main()
{
    //std::istream_iterator<int> in(std::cin), eof;
    //std::vector<int> v(in, eof); // reads all input into vector

     std::vector<int> v1 = { 1, 2, 3 };
     std::ostream_iterator<int> out(std::cout, " ");
     std::copy(v1.begin(), v1.end(), out);  // Output: 1 2 3

     auto it = v1.begin();
     it += 2;
     std::cout << *it;
    
}