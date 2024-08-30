#include <iostream>
using namespace std;

class Queue {
private:
    int queue[5];
    int rear, front;

public:
    Queue() : rear(-1), front(-1) {}

    void insert(int x) {
        if (rear == 4) {
            cout << "Queue overflow\n";
        } else {
            queue[++rear] = x;
            cout << "Inserted " << x << endl;
        }
    }

    void del() {
        if (front == rear) {
            cout << "Queue underflow\n";
        } else {
            cout << "Deleted " << queue[++front] << endl;
        }
    }

    void display() {
        if (front == rear) {
            cout << "Queue is empty\n";
        } else {
            for (int i = front + 1; i <= rear; ++i) {
                cout << queue[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue qu;
    int choice, value;

    do {
        cout << "\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the element: ";
                cin >> value;
                qu.insert(value);
                break;
            case 2:
                qu.del();
                break;
            case 3:
                qu.display();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice, try again.\n";
        }
    } while (choice != 4);

    return 0;
}
