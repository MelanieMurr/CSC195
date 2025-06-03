#define _CRT  DBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>
#include <memory>
using namespace std;


template<typename T>
class smart_ptr
{
public:
    smart_ptr(T* ptr = nullptr) : _ptr{ ptr }  {}
    smart_ptr(const smart_ptr&) = delete;
    smart_ptr& operator = (const smart_ptr&) = delete;

    ~smart_ptr() { if (_ptr) delete _ptr;  }

    T& operator * () { return *_ptr; }
    T* operator & () { return  _ptr; }
    T* operator -> () { return  _ptr; }

    T* get() { return _ptr; }

private:
    T* _ptr{};
};

int main() {
    int a[] = { 1, 2, 3, 4, 5 };

    int* p = a;

    cout << p << endl;
    // pointer arithmetic
    p++; // gives the address of the next item inside the array
    p++;
    p--;
    p = p + 2; // gives 4

    cout << *p << endl; // dereference

    int* ptHeap = new int{5};

    cout << "==============" << endl;
    cout << ptHeap << endl;
    cout << *ptHeap << endl;

    delete ptHeap;

    {
        smart_ptr<int> sp(new int{ 5 });
        unique_ptr<int> up(new int{ 10 });
    }

    _CrtDumpMemoryLeaks();
}