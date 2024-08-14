
class Stack {
private:
    Node* top;  // Pointer to the top of the stack
    int size;   // To keep track of the size of the stack

public:
    Stack() {
        top = nullptr;
        size = 0;
    }

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = top;  // Point the new node to the current top
        top = newNode;        // Update top to the new node
        size++;
    }

    void pop() {
        if (size != 0) {
            Node* temp = top;
            top = top->next;  // Move the top to the next node
            delete temp;      // Free the memory of the old top node
            size--;
        }
    }

    int getTop() {
        if (size != 0) {
            return top->data;
        }
        return -1;  // Return -1 if the stack is empty
    }
};