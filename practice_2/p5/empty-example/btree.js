//https://www.cs.usfca.edu/~galles/visualization/BTree.html
//https://stackoverflow.com/questions/1331289/javascript-binary-search-tree-implementation
//import {object} from './p5/p5.js';
//import {object} from './p5/prueba.js'

function BinarySearchTree() {
    this.root = null;
}
BinarySearchTree.prototype.makeNode = function(value) {
    var node = {};
    node.value = value;
    node.left = null;
    node.right = null;
    return node;
};
BinarySearchTree.prototype.add = function(value) {
    var currentNode = this.makeNode(value);
    if (!this.root) {
        this.root = currentNode;
    } else {
        this.insert(currentNode);
    }
    return this;
};
BinarySearchTree.prototype.insert = function(currentNode) {
    var value = currentNode.value;
    var traverse = function(node) {
        //if value is equal to the value of the node, ignore
        //and exit function since we don't want duplicates
        if (value === node.value) {
            return;
        } else if (value > node.value) {
            if (!node.right) {
                node.right = currentNode;
                return;
            } else
                traverse(node.right);
        } else if (value < node.value) {
            if (!node.left) {
                node.left = currentNode;
                return;
            } else
                traverse(node.left);
        }
    };
    traverse(this.root);
};
BinarySearchTree.prototype.contains = function(value) {
    var node = this.root;
    var traverse = function(node) {
        if (!node) return false;
        if (value === node.value) {
            return true;
        } else if (value > node.value) {
            return traverse(node.right);
        } else if (value < node.value) {
            return traverse(node.left);
        }
    };
    return traverse(node);
};
/* BREADTH FIRST TREE TRAVERSAL */
/* Breadth First Search finds all the siblings at each level
   in order from left to right or from right to left. */
BinarySearchTree.prototype.breadthFirstLTR = function() {
    var node = this.root;
    var queue = [node];
    var result = [];
    while (node = queue.shift()) {
        result.push(node.value);
        node.left && queue.push(node.left);
        node.right && queue.push(node.right);
    }
    return result;
};
BinarySearchTree.prototype.breadthFirstRTL = function() {
    var node = this.root;
    var queue = [node];
    var result = [];
    while (node = queue.shift()) {
        result.push(node.value);
        node.right && queue.push(node.right);
        node.left && queue.push(node.left);
    }
    return result;
};
/*DEPTH FIRST TRAVERSALS*/
/*  preOrder is a type of depth-first traversal that tries 
    togo deeper in the tree before exploring siblings. It 
    returns the shallowest descendants first.
    1) Display the data part of root element (or current element)
    2) Traverse the left subtree by recursively calling the pre-order function.
    3) Traverse the right subtree by recursively calling the pre-order function. */
BinarySearchTree.prototype.preOrder = function() {
    var result = [];
    var node = this.root;
    var traverse = function(node) {
        result.push(node.value);
        node.left && traverse(node.left);
        node.right && traverse(node.right);
    };
    traverse(node);
    return result;
};
/*  inOrder traversal is a type of depth-first traversal
    that also tries to go deeper in the tree before exploring siblings.
    however, it returns the deepest descendents first
    1) Traverse the left subtree by recursively calling the pre-order function.
    2) Display the data part of root element (or current element)
    3) Traverse the right subtree by recursively calling the pre-order function. */
BinarySearchTree.prototype.inOrder = function() {
    var result = [];
    var node = this.root;
    var traverse = function(node) {
        node.left && traverse(node.left);
        result.push(node.value);
        node.right && traverse(node.right);
    };
    traverse(node);
    return result;
};
/*  postOrder traversal is a type of depth-first traversal
    that also tries to go deeper in the tree before exploring siblings.
    however, it returns the deepest descendents first

    1) Traverse the left subtree by recursively calling the pre-order function.
    2) Display the data part of root element (or current element)
    3) Traverse the right subtree by recursively calling the pre-order function. */
BinarySearchTree.prototype.postOrder = function() {
    var result = [];
    var node = this.root;
    var traverse = function(node) {
        node.left && traverse(node.left);
        node.right && traverse(node.right);
        result.push(node.value);
    };
    traverse(node);
    return result;
};
//find the left most node to find the min value of a binary tree;
BinarySearchTree.prototype.findMin = function() {
    var node = this.root;
    var traverse = function(node) {
        return !node.left ? node.value : traverse(node.left);
    };
    return traverse(node);
};
//find the right most node to find the max value of a binary tree;
BinarySearchTree.prototype.findMax = function() {
    var node = this.root;
    var traverse = function(node) {
        return !node.right ? node.value : traverse(node.right);
    };
    return traverse(node);
};
BinarySearchTree.prototype.getDepth = function() {
    var node = this.root;
    var maxDepth = 0;
    var traverse = function(node, depth) {
        if (!node) return null;
        if (node) {
            maxDepth = depth > maxDepth ? depth : maxDepth;
            traverse(node.left, depth + 1);
            traverse(node.right, depth + 1);
        }
    };
    traverse(node, 0);
    return maxDepth;
};
//Can you write me a function that returns all the averages of the nodes 
//at each level (or depth)?? with breadth-first traversal
BinarySearchTree.prototype.nodeAverages = function() {
    var node = this.root;
    var result = {};
    var depthAverages = [];

    var traverse = function(node, depth) {
        if (!node) return null;
        if (node) {
            if (!result[depth])
                result[depth] = [node.value];
            else
                result[depth].push(node.value);
        }
        //check to see if node is a leaf, depth stays the same if it is
        //otherwise increment depth for possible right and left nodes
        if (node.right || node.left) {
            traverse(node.left, depth + 1);
            traverse(node.right, depth + 1);
        }
    };
    traverse(node, 0);

    //get averages and breadthFirst
    for (var key in result) {
        var len = result[key].length;
        var depthAvg = 0;
        for (var i = 0; i < len; i++) {
            depthAvg += result[key][i];
        }
        depthAverages.push(Number((depthAvg / len).toFixed(2)));
    }
    return depthAverages;
};
//Convert a binary search tree to a linked-list in place. 
//In-order depth-first traversal.
function LinkedList() {
    this.head = null;
}
BinarySearchTree.prototype.convertToLinkedList = function() {
    var result = [];
    var node = this.root;
    if (!node) return null;
    var traverse = function(node) {
        node.left && traverse(node.left);
        result.push(node.value);
        node.right && traverse(node.right);
    };
    traverse(node);
    var makeNode = function(value) {
        var node = {};
        node.value = value;
        node.next = null;
        return node;
    };
    var list = new LinkedList();
    list.head = makeNode(result[0]);
    var current = list.head;
    for (var i = 1; i < result.length; i++) {
        var currentNode = makeNode(result[i]);
        current.next = currentNode;
        current = current.next;
    }
    return list;
};
