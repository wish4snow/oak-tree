#include "node.hpp"

using namespace std;

int main () {
	Squirrel cheeks = Squirrel("Cheeks");
	Node node_one = Node(&cheeks);

	Squirrel squeaks = Squirrel("Left");
	Node node_two = Node(&squeaks);

	Squirrel fluffybutt = Squirrel("Right");
	Node node_three = Node(&fluffybutt);
	
	Squirrel lefy = Squirrel("lefy");
	Node node_four = Node (&lefy);

	node_one.set_left(&node_two);
	node_one.set_right(&node_three);
	node_two.set_left(&node_four);

	Node retrieved_node_one = node_one.left(); // This should retrieve the left node
	Node retrieved_node_two = node_one.right(); // This should retrieve the right node
	Node four = node_one.left().left();

	cout << node_one.give_item().get_name() << endl;
	cout << retrieved_node_one.give_item().get_name() << endl;
	cout << retrieved_node_two.give_item().get_name() << endl;

	cout << four.give_item().get_name() << endl;
	return 0;
}
