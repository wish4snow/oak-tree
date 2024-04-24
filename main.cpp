#include "node.hpp"

using namespace std;

int main () {
	Squirrel cheeks = Squirrel("Cheeks");
	Node node_one = Node(&cheeks);

	Squirrel squeaks = Squirrel("Left");
	Node node_two = Node(&squeaks);

	Squirrel fluffybutt = Squirrel("Right");
	Node node_three = Node(&fluffybutt);

	node_one.set_left(&node_two);
	node_one.set_right(&node_three);

	Node retrieved_node_one = node_one.left(); // This should retrieve the left node
	Node retrieved_node_two = node_one.right(); // This should retrieve the right node
	
	cout << node_one.give_item().get_name() << endl;
	cout << retrieved_node_one.give_item().get_name() << endl;
	cout << retrieved_node_two.give_item().get_name() << endl;
	return 0;
}
