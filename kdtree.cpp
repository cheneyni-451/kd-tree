#include "kdtree.h"

KD_Tree::KDT_Node::~KDT_Node() {
    delete left;
    delete right;
}

KD_Tree::KD_Tree() : root(nullptr) {}

KD_Tree::KD_Tree(const std::vector<Point> &points) {}

KD_Tree::~KD_Tree() { delete root; }
