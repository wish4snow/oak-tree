#include "squirrel.hpp"

using namespace std;

class Node{
	private:
		Squirrel *item;
		Node *left_branch;
		Node *right_branch;
	
	public:
		Node(Squirrel *item);
		void set_left(Node *item);
		void set_right(Node *iten);
		Node left();
		Node right();
		Squirrel give_item();
};

