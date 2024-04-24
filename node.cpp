#include "node.hpp"

using namespace std;


Node::Node(Squirrel *item){
	this->item = item;
	this->left_branch = NULL;
	this->right_branch = NULL; 
}


void Node::set_left(Node *item) {
	this->left_branch = item;
}


void Node::set_right(Node *item) {
	this->right_branch = item;
}


Node Node::left(){
	return *left_branch;
}


Node Node::right(){
	return *right_branch;
}


Squirrel Node::give_item() {
	return *item;
}
