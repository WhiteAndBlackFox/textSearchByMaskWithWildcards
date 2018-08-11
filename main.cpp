#include <iostream>
#include "wildcards.hpp"

using namespace std;

int main()
{
    using wildcards::match;

    constexpr char pattern[] = "H?llo,* World[.!?]";

      cout << ((match("Hello, World!", pattern) == 1)?"found":"not found") << endl;
      cout << ((match("Hallo, World!", pattern) == 1)?"found":"not found") << endl;
      cout << ((match("Hello, big World!", pattern) == 1)?"found":"not found") << endl;
      cout << ((match("Hello, World.", pattern) == 1)?"found":"not found") << endl;
      cout << ((match("Hello, World?", pattern) == 1)?"found":"not found") << endl;

    return 0;
}
