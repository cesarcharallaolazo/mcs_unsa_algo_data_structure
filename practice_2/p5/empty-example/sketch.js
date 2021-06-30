
//TESTS
var bst = new BinarySearchTree();
bst.add(40).add(25).add(78).add(10).add(32);
console.log('BS1', bst);

var bst2 = new BinarySearchTree();
bst2.add(10).add(20).add(30).add(5).add(8).add(3).add(9);
console.log('BST2', bst2);
console.log('BREADTHFIRST LTR', bst2.breadthFirstLTR());
console.log('BREADTHFIRST RTL', bst2.breadthFirstRTL());
console.log('PREORDER', bst2.preOrder());
console.log('INORDER', bst2.inOrder());
console.log('POSTORDER', bst2.postOrder());

/* 
BREADTHFIRST LTR [ 10, 5, 20, 3, 8, 30, 9 ]
BREADTHFIRST RTL [ 10, 20, 5, 30, 8, 3, 9 ]
PREORDER [ 10, 5, 3, 8, 9, 20, 30 ]
INORDER [ 3, 5, 8, 9, 10, 20, 30 ]
POSTORDER [ 3, 9, 8, 5, 30, 20, 10 ]
*/

var bst3 = new BinarySearchTree();
bst3.add('j').add('f').add('k').add('z').add('a').add('h').add('d');

//setup(bst3);

console.log(bst3);
console.log('BREADTHFIRST LTR', bst3.breadthFirstLTR());
console.log('BREADTHFIRST RTL', bst3.breadthFirstRTL());
console.log('PREORDER', bst3.preOrder());
console.log('INORDER', bst3.inOrder());
console.log('POSTORDER', bst3.postOrder());
/*
BREADTHFIRST LTR [ 'j', 'f', 'k', 'a', 'h', 'z', 'd' ]
BREADTHFIRST RTL [ 'j', 'k', 'f', 'z', 'h', 'a', 'd' ]
PREORDER [ 'j', 'f', 'a', 'd', 'h', 'k', 'z' ]
INORDER [ 'a', 'd', 'f', 'h', 'j', 'k', 'z' ]
POSTORDER [ 'd', 'a', 'h', 'f', 'z', 'k', 'j' ]
 */
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

//https://p5js.org/es/examples/structure-functions.html


function setup(){
createCanvas(400,400);
background(220);
}

function draw(){
  for(let i=0; i<6;i++){
    fill(random(250),random(100),random(255,255));
    ellipse(i*60+40,random(50),30);
  }
}
/*
let mic; let micLevel; 
function setup() { 
  createCanvas(400, 400); 
  mic = new p5.AudioIn(); 
  mic.start(); } 
  
function draw() { 
  micLevel = mic.getLevel(); 
  background(5); 
  stroke(255, round(micLevel * 800), round(micLevel*255)); 
  strokeWeight(micLevel * 200); 
  for(let i =0; i < 6; i++) { // for loop counting from 0 to 6 
    fill(random(250), random(100), random(255), 255); 
    //1 circle is drawn with every loop, so 6 circles total 
    ellipse(i*60 + 40, micLevel*5000 + random(50), 50); 
    //micLevel for the y value caues the circles to go up and down with the volume, i*60 means a new circle is drawn every 60 pixels along the x axis 
  }
 }*/


//[ 3, 5, 7, 8, 9, 10, 20, 30, 50, 80, 98 ]
//{ head: { value: 3, next: { value: 5, next: [Object] } } }
/*
function setup() {
  createCanvas(720, 400);
  background(51);
  noStroke();
  noLoop();
}

function draw() {
  createCanvas(720, 400);
  background(200);
// Una elipse
  ellipse(240, 240, 80, 80);
  
}

function drawTarget(xloc, yloc, size, num) {
  const grayvalues = 255 / num;
  const steps = size / num;
  for (let i = 0; i < num; i++) {
    fill(i * grayvalues);
    ellipse(xloc, yloc, size - i * steps, size - i * steps);
  }
}*/
