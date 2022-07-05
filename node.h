class Node {
    int value;
    Node * next;

    public:
        Node(int val, Node * nxt){
            value = val;
            next = nxt;
        }

        void setValue(int val)
        {
            value = val;
        }

        int getValue()
        {
            return value;
        }

        void setNext(Node * nxt)
        {
            next = nxt;
        }

        Node * getNext()
        {
            return next;
        }
};