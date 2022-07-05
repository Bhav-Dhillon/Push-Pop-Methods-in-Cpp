#include "utils.h"
#include "superArray.h"
#include "stack.h"

using namespace std;

int main()
{
    Stack * myStack = new Stack();

    myStack->push(2);
    myStack->push(4);
    myStack->push(6);
    myStack->push(8);
    myStack->push(10);

    cout << "just popped out " << myStack->pop() << endl;

    myStack->print();

    return 0;
}