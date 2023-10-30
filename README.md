# Binary Search
1. `General Trees:`Are unordered tree data structures where the root node has minimum 0 or maximum ‘n’ subtrees.
2. `Binary Trees:` are general trees where node can hold max. of 2 subtrees. They are of 3 types
	- `Full Binary Tree:` A full binary tree is a binary tree type where every node has either 0 or 2 child nodes.
	- `Complete Binary Tree:` A complete binary tree is a binary tree type where all the leaf nodes must be on the same level.
	- `Perfect Binary Tree:` a binary tree type where all the leaf nodes are on the same level and every node except leaf nodes have 2 children.
3. `Binary Search Trees:` Works exactly as binary trees but with constraints. values in the left subtree are always less than the values in the root node and the values in the right subtree are always greater than the values in the root node.
- Although the arrangement in BST has advantages, it leads to skewness which is can be overcame by `Balance Binary Search Trees`
## Balanced Binary Search Tree.
- if m-n = 0/1/-1 then a binary search tree becomes a  Balanced Binary Search Tree.
 Binary Search Trees use rotations as self-balancing algorithms. There are four different types of rotations:
	- Left Left
	- Right Right
	- Left Right
	- Right Left.
# Self-balancing binary search trees
1. AVL Trees
- They ensure that the height difference between the left and right subtrees (the balance factor) of any node is at most 1. This guarantees that the tree remains balanced, and operations have a logarithmic time complexity
2. Red-Black Trees
- They ensure that the tree remains approximately balanced by enforcing certain rules and are more flexible than AVL trees in terms of balancing.
3. B Trees and B+ Trees
- They are typically used in database systems and file systems. They are not binary trees but are self-balancing tree structures that generalize binary search trees.
4. Splay Trees
- They are self-adjusting binary search tree. They reorganize themselves during operations to move recently accessed items closer to the root.
5. Priority Search Trees
- Priority Search Trees are a type of self-balancing tree used for various applications, including range queries and geometric algorithms. 
