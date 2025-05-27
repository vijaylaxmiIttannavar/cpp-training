#include <iostream>
#define MAX 5
using namespace std;

class Queue
{
	private:
		int front;
		int rear;
		int v;
		int arr[MAX];
	public:
		Queue();

		int enque(int);
		int deque();
		void display();
};

Queue::Queue()
{
	front = 0;
	rear = 0;
}

int Queue::enque(int v)
{
	if (rear == MAX)
	{
		cout << "Queue is full" << endl;
		return EXIT_SUCCESS;
	}
	arr[rear] = v;
	rear++;

	return EXIT_SUCCESS;
}

int Queue::deque()
{
	if ((rear == front) || (front == MAX))
	{
		cout << "Queue is empty" << endl;
		rear = 0;
		front = 0;
		return EXIT_SUCCESS;
	}
	cout << arr[front] << " got dequeued" << endl;
	front++;

	return EXIT_SUCCESS;
}


void Queue::display()
{
	if ((rear == front) || (front == MAX))
	{
		cout << "Queue is empty" << endl;
		rear = 0;
		front = 0;
		return;
	}
	cout << "Queue elements are\n";
	for (int i = front; i < rear;i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	Queue q;
	q.enque(10);
	q.enque(20);
	q.enque(30);
	q.enque(40);
	q.enque(50);
	q.enque(60);
	q.display();
	q.deque();
	q.deque();
	q.deque();
	q.deque();
	q.deque();
	q.deque();

	q.display();

	
	return 0;
}
