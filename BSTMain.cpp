#include <unordered_map>
#include <map>

#include "BinarySearchTree.h"

int main()
{
#pragma region BST
	BinarySearchTree bst;
	bst.Insert(30);
	bst.Insert(40);
	bst.Insert(45);
	bst.Insert(50);
	bst.Insert(70);

	bst.PrintTree(bst._root);

	auto searchNode = bst.Search(bst._root, 100);
	if (searchNode != nullptr)
	{
		cout << "해당 노드를 찾았습니다." << endl;
		cout << searchNode->key << endl;
	}
	else
		cout << "해당 노드가 없습니다." << endl;

	auto minNode = bst.Min(bst._root);
	cout << minNode->key << endl;

	auto maxNode = bst.Max(bst._root);
	cout << maxNode->key << endl;
#pragma endregion

	unordered_map<int,int> um;

	um[5] = 1;

	return 0;
}