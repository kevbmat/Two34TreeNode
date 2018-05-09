// Specification of ADT 2-3-4 Tree Node
//    data object: a node in a 2-3-4 Tree
//        contains room for 1-3 data items (just using keys)
//        contains room for 0-4 children
//    operations: several creates, destroy,
//       cleanUpNode,
// Built on class Key

// This class will be used by class Two34Tree.
//     All members are public to give Two34Tree access.
// Alternatively, we could make Two34Tree a friend class
//     of this class and all members would be private.
// Programmer: dr y    Date: April 21, 2003
// Filename: Two34TreeNode.h

#include "Two34TreeNode.h"

// creates an empty two34 tree node
// pre: two34treenode object doesn't exist
// post: object is an empty tree node, with
// all Keys in keys[] set to -1 (empty) and
// all nodes in kids[] set to nullptr
// usage: Two34TreeNode zags;
Two34TreeNode::Two34TreeNode()
{
    for (int i = 0; i < 3; i++)
    {
        keys[i].emptyIt();
    }
    for (int i = 0; i < 4; i++)
    {
        kids[i] = nullptr;
    }
}

// creates an two34 tree node with one key
// pre: two34treenode object doesn't exist
// post: object is an empty tree node, with
// all Keys in keys[] set to -1 (empty) except for
// keys[0] which is set to the newKey and
// all nodes in kids[] set to nullptr
// usage: Two34TreeNode(newKey);
Two34TreeNode::Two34TreeNode (const Key& newKey)
{
    keys[0] = newKey;
    for (int i = 1; i < 3; i++)
    {
        keys[i].emptyIt();
    }
    for (int i = 0; i < 4; i++)
    {
        kids[i] = nullptr;
    }
}

// creates an two34 tree node with one key
// pre: two34treenode object doesn't exist
// post: object is an empty tree node, with
// all Keys in keys[] set to -1 (empty) except for
// keys[0] which is set to the newKey and
// all nodes in kids[] set to nullptr except for
// kids[0] and kids[1] which is set for left and right
// usage: Two34TreeNode(newKey, left, right);
Two34TreeNode::Two34TreeNode (const Key& newKey, Two34TreeNode* left, Two34TreeNode* right)
{
    keys[0] = newKey;
    for (int i = 0; i < 2; i++)
    {
        keys[i].emptyIt();
    }
    kids[0] = left;
    kids[1] = right;
    for (int i = 2; i < 4; i++)
    {
        kids[i] = nullptr;
    }
}

Two34TreeNode::~Two34TreeNode()
{
    
}

// cleans up the two34 tree node by
// setting all the kids to nullptr
// and emptying all the keys except for keys[0]
// usage: zags -> cleanUpNode();
void Two34TreeNode::cleanUpNode()
{
    for (int i = 1; i < 3; i++)
    {
        keys[i].emptyIt();
    }
    for (int i = 2; i < 4; i++)
    {
        kids[i] = nullptr;
    }
}

