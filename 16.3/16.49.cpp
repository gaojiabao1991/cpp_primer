#include <algorithm>
#include <array>
#include <cstring>
#include <deque>
#include <forward_list>
#include <fstream>
#include <functional>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <memory>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using std::allocator;
using std::array;
using std::back_inserter;
using std::begin;
using std::cerr;
using std::cin;
using std::copy;
using std::cout;
using std::deque;
using std::end;
using std::endl;
using std::ends;
using std::find;
using std::forward_list;
using std::front_inserter;
using std::function;
using std::getline;
using std::ifstream;
using std::initializer_list;
using std::istream;
using std::istream_iterator;
using std::istringstream;
using std::list;
using std::make_shared;
using std::map;
using std::multimap;
using std::multiset;
using std::ofstream;
using std::ostream;
using std::ostream_iterator;
using std::ostringstream;
using std::pair;
using std::runtime_error;
using std::set;
using std::shared_ptr;
using std::sort;
using std::stable_sort;
using std::string;
using std::stringstream;
using std::unique;
using std::unique_ptr;
using std::unordered_map;
using std::unordered_set;
using std::vector;
using std::weak_ptr;
using namespace std::placeholders;

template <typename T> void f(T t) { cout << ("f(T)") << endl; }

template <typename T> void f(const T* t) { cout << ("f(const T*)") << endl; }

template <typename T> void g(T t) { cout << ("g(T)") << endl; }

template <typename T> void g(T* t) { cout << ("g(T*)") << endl; }

int main(int argc, char** argv) {
    int i = 42, *p = &i;
    const int ci = 0, *p2 = &ci;

    g(42);
    g(p);
    g(ci);
    g(p2);

    cout << ("=====") <<endl;

    f(42);
    f(p);
    f(ci);
    f(p2);

}