#ifndef KD_TREE_H
#define KD_TREE_H

#include <vector>

typedef std::vector<int> Point;

class KD_Tree {
   public:
    class KDT_Node {
        Point point;
        KDT_Node *left;
        KDT_Node *right;

       public:
        KDT_Node(const Point &p, const KDT_Node *left, const KDT_Node *right);
        ~KDT_Node();
    };

    KD_Tree();
    KD_Tree(const std::vector<Point> &points);

    ~KD_Tree();

    Point find_nn(const Point &p);

   private:
    KDT_Node *root;
};

#endif /* KD_TREE_H */
