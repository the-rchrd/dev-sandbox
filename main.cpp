#include <iostream>

#include "src/algorithms/string.hpp"
#include "src/tasks/watermelon/watermelon.hpp"
#include "src/tasks/too_long_words/too_long_words.hpp"

int main()
{
    ds::algorithms::string::find_most_common_symbol::unorderedMapMethod("/Users/therchrd/Documents/С++/Code/dev-sandbox/src/algorithms/input.txt");
    ds::tasks::watermelon::solution("/Users/therchrd/Documents/С++/Code/dev-sandbox/src/tasks/watermelon/input.txt");
    ds::tasks::too_long_words::solution("/Users/therchrd/Documents/С++/Code/dev-sandbox/src/tasks/too_long_words/input.txt");

    return 0;
}
