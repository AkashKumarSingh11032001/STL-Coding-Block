
/*

Iterators: Iterators as an entity that helps us to access the data within a container with certain restrictions.

• Input Iterators:
A entity through which you can read data from container and move ahead.
For example - A Keyboard

• Output Iterators:
A entity through which you can write into the container and move ahead.

• Forward Iterators:
Iterator with functionalities of input and output iterator in single direction. For Example - Singly Linked List

• Bidirectional Iterators:
Forward Iterator that can move in both directions.

• Random Access Iterators Random Access Iterator is an iterator that can read/write in both directions and also can take jumps.

*/

// Template: making program that can be used by any type of datatype.
// Iterator: making program that can by used by any type of containers.

// Example : Template + Itretor
#include <bits/stdc++.h>
using namespace std;

template <class ForwardIterator, class T>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key)
{

    while (start != end)
    {
        /* code */
        if (*start == key)
        {
            return start;
        }
        start++;
    }
    return end;
}

int main()
{

    list<int> lis;

    lis.push_back(1);
    lis.push_back(2);
    lis.push_back(3);
    lis.push_back(4);
    lis.push_back(5);

    auto it = search(lis.begin(), lis.end(), 3);
    if (it == lis.end())
    {
        cout << "elemnt not present";
    }
    else
    {
        cout << *it;
    }
}
