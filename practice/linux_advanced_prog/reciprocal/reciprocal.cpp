#include <cassert>
#include "reciprocal.hpp"

double reciprocal(int i)
{
    // arg shouldn't be equal to 0
    assert(i != 0);
    
    return 1.0/i;
}
