#include <bits/stdc++.h>
using namespace std;

class Book
{

public:
    string name;
    int price;

    Book()
    {
    }

    Book(string name, int price)
    {
        this->name = name;
        this->price = price;
    }
};

class bookCompare
{
public:
    bool
    operator()(Book a, Book b)
    {
        if (a.name == b.name){
            return true;
        }
        return false;
    }
};

// Template + Itreartor + Comparator
template <class ForwardIterator, class T, class compare>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key, compare cmp)
{

    while (start != end)
    {
        /* code */
        if (cmp(*start,key))
        {
            return start;
        }
        start++;
    }
    return end;
}

int main()
{

    Book b1("c++", 100); // old edi book
    Book b2("python", 101);
    Book b3("c", 102);

    list<Book> l;
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);

    Book bookToFind("c++", 110); // new edi book

    bookCompare cmp;

    auto it = search(l.begin(), l.end(),bookToFind,cmp);
    if(it != l.end()){
        cout << " BOOK FOUND";
    }else{
        cout<< "NOT FOUND";
    }
    
    
    // if (cmp(b1, bookToFind))
    // {
    //     cout << "Same Book";
    // }
}