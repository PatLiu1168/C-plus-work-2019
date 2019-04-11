#define SIZE 10

class stack{
    private:
        int S[10];
		int tos;
    public:
        stack();
        ~stack();
        
        void push (int x);
        int pop ();
        int isEmpty ();
        int isFull ();
};
