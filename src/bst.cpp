#include <iostream>

#include "bst.h"

Node*& BST::get_root()
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

Node** BST::find_node(int value)
{
    return NULL;
}
Node** BST::find_parrent(int value)
{
    return NULL;
}
Node** find_successor(int value)
{
    return NULL;
}

bool delete_node(int value)
{
    return NULL;
}