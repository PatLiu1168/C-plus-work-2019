#include <cstdlib>
#include <iostream>
using namespace std;

struct node {
	int value;
	node * next;
};

class Queue
{
	private:
		node * head;
		
	public:
		
		Queue();
		~Queue();
	
		void enqueue(int x);
	
		int dequeue();
	
	 	int isEmpty();
	
		int size;
		
};


Queue::Queue()
{
	node * dummy = new struct node();
	head=dummy;
	head->next = 0;
	size = 0;
}

Queue::~Queue ()
{
	node * temp;
	while(head-> next)
	{
		temp = head;
		head = head->next;
		delete temp;
	}
	delete head;
}

void Queue::enqueue(int x)
{
	node * previous = head; // since there is a dummy node other if there isnt a dummy, just put head
	while(previous->next)
	{
		previous = previous->next;
	}
	node * temp = new struct node(); // assume always have memory
	temp->value = x;
	temp->next = 0;
	previous->next = temp;
	size++;
}

int Queue::dequeue()
{
	int value = 0;
	
	if (isEmpty()){
		cout<< "Queue is empty\n";
		return 0;
	}
	

	node* temp = head->next; // or head if no dummy
	value = temp->value; // or head -> value if no dummy
	head->next = head ->next -> next;
	delete temp;
	
	size--;
	return value;
}

int Queue::isEmpty()
{
	if(head->next)
		return 0;
	return 1;
}

int main(int argc, char** argv) 
{
	int x,y;
	Queue q;
	q.enqueue(3);
//	q.enqueue(600);
//	q.enqueue(45);
//	x = q.dequeue();
//	y = q.dequeue();
//	q.enqueue(18);
//	x = q.dequeue();
	y = q.dequeue();
	x = q.dequeue();

	
	cout << x << " | " ;
	cout << y << " | " ;
	return 0;
}
