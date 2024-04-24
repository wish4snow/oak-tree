#include "squirral.hpp"

using namespace std;

class Node{
	private:
		Squirral *item;
		Node *left;
		Node *right;
	
	public:
		Node(*item);
		void set_left(*item);
		void set_right(*iten);
		Squirral left();
		Squirral right();
}

