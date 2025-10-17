#include "LinkedQueue.hpp"
#include <string>

int main() {
    LinkedQueue<int> a;

    try {
        a.front();
    }
    catch (string& e) {
        cerr << e << endl;
    }

    try {
        a.back();
    }
    catch (string& e) {
        cerr << e << endl;
    }

    a.enqueue(-5);
    cout << "A length: " << a.getLength() << endl;
    cout << "A front: " << a.front() << endl;
    cout << "A back: " << a.back() << endl;

    a.dequeue();
    cout << "A length: " << a.getLength() << endl;

    a.enqueue(0);
    a.enqueue(1);
    a.enqueue(2);
    a.enqueue(3);
    a.enqueue(4);
    a.enqueue(5);
    a.enqueue(6);
    a.enqueue(7);
    a.enqueue(8);
    a.enqueue(9);

    LinkedQueue<int> b = a;

    cout << "A contains: ";
    for (int i = 0; i < 10; i++) {
        cout << a.front() << " ";
        a.dequeue();
    }
    cout << endl;
    
    if (a.isEmpty()) {
        cout << "A is now empty" << endl;
    }


    cout << "B length: " << b.getLength() << endl;
    cout << "B front: " << b.front() << endl;
    cout << "B back: " << b.back() << endl; 

    LinkedQueue<int> c = b;

    b.clear();

    if (b.isEmpty()) {
        cout << "A is now empty" << endl;
    }

    cout << "C length: " << c.getLength() << endl;
    cout << "C front: " << c.front() << endl;
    cout << "C back: " << c.back() << endl; 
}