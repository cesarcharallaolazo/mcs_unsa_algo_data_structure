//https://stackoverflow.com/questions/1331289/javascript-binary-search-tree-implementation
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
BinarySearchTree.prototype.findMin = function() {
    var node = this.root;
    var traverse = function(node) {
        return !node.left ? node.value : traverse(node.left);
    };
    return traverse(node);
};
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

//TESTS
var bst = new BinarySearchTree();
bst.add(40).add(25).add(78).add(10).add(32);
console.log('BS1', bst);

/*
var bst2 = new BinarySearchTree();
bst2.add(10).add(20).add(30).add(5).add(8).add(3).add(9);
console.log('BST2', bst2);
console.log('BREADTHFIRST LTR', bst2.breadthFirstLTR());
console.log('BREADTHFIRST RTL', bst2.breadthFirstRTL());
console.log('PREORDER', bst2.preOrder());
console.log('INORDER', bst2.inOrder());
console.log('POSTORDER', bst2.postOrder());

//BREADTHFIRST LTR [ 10, 5, 20, 3, 8, 30, 9 ]
//BREADTHFIRST RTL [ 10, 20, 5, 30, 8, 3, 9 ]
//PREORDER [ 10, 5, 3, 8, 9, 20, 30 ]
//INORDER [ 3, 5, 8, 9, 10, 20, 30 ]
//POSTORDER [ 3, 9, 8, 5, 30, 20, 10 ]

console.log(bst2.findMin()); // 3
console.log(bst2.findMax()); // 30
console.log(bst2.contains(15));
//bst2.add(55);
//bst2.add(65);
//bst3.add(75);
console.log(bst2);
console.log(bst2.getDepth()); // 3
console.log(bst2.add(7).add(50).add(80).add(98));
console.log(bst2.getDepth()); // 5
console.log(bst2.nodeAverages()); //[ 10, 12.5, 13.67, 22, 80, 98 ]
console.log(bst2.convertToLinkedList());
//[ 3, 5, 7, 8, 9, 10, 20, 30, 50, 80, 98 ]
//{ head: { value: 3, next: { value: 5, next: [Object] } } }*/