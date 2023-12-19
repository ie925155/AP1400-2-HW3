#include <iostream>

#include "bst.h"


BST::Node::Node(int value, Node* left, Node* right)
    : value(value), left(left), right(right) {}
BST::Node::Node()
    : value(0), left(nullptr), right(nullptr) {}
BST::Node::Node(const Node &node)
    : value(node.value), left(node.left), right(node.right) {}


BST::Node*& BST::get_root()
{
    return this->root;
}


void BST::bfs(std::function<void(Node*& node)> func)
{

}

size_t BST::length()
{
    return 0;
}

bool BST::add_node(int value)
{
    return true;
}

BST::Node** BST::find_node(int value)
{
    return NULL;
}
BST::Node** BST::find_parrent(int value)
{
    return NULL;
}
BST::Node** BST::find_successor(int value)
{
    return NULL;
}

bool BST::delete_node(int value)
{
    return NULL;
}
