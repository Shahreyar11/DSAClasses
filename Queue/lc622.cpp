#include<bits/stdc++.h>
using namespace std;


class MyCircularQueue {
public:
    queue<int> q;
    int capacity;

    MyCircularQueue(int k) {
        capacity = k;
    }

    bool enQueue(int value) {
        if (isFull())
            return false;

        q.push(value);
        return true;
    }

    bool deQueue() {
        if (isEmpty())
            return false;

        q.pop();
        return true;
    }

    int Front() {
        if (isEmpty())
            return -1;

        return q.front();
    }

    int Rear() {
        if (isEmpty())
            return -1;

        return q.back();
    }

    bool isEmpty() {
        return q.empty();
    }

    bool isFull() {
        return q.size() == capacity;
    }
};