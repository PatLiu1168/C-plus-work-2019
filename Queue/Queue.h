
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

