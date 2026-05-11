class MyCircularQueue {
    int rear = 0;
    int front = 0;
    int count = 0;
    int k;
    vector<int> queue;
public:
    MyCircularQueue(int k) {
        this->k = k;
        queue.resize(k);
    }
    bool enQueue(int value) {
        if (count == k) {
            return false;
        }

        queue[rear] = value;
        rear = (rear + 1) % k;
        count++;

        return true;
    }

    bool deQueue() {
        if (count == 0) {
            return false;
        }

        front = (front + 1) % k;
        count--;

        return true;
    }

    int Front() {
        if (count == 0) {
            return -1;
        }

        return queue[front];
    }

    int Rear() {
        if (count == 0) {
            return -1;
        }

        return queue[(rear - 1 + k) % k];
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == k;
    }
};