//https://editor.p5js.org/miles/sketches/SJWYMQqGE
//https://editor.p5js.org/codingtrain/sketches/UBGpfubd1
/*

// ------------------------------------
// TEST PROGRAM

var btree = new BTree();

var a1 = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,20];
var a2 = [4,2,7,1,5,3,8];

var a = a1;

a.forEach(function(v) {
    // console.log('----------------------------------');
    // console.log('ADDING ' + v + ' TO TREE');
    // console.log('');

    btree.add(v);
   // console.log(btree.toString());
});

console.log(' --- BEFORE REMOVING --- ');
console.log(btree.toString());

a.forEach(function(v) {
    console.log('----------------------------------');
    console.log('REMOVING ' + v + ' FROM TREE');
    console.log('');

    console.assert( btree.remove(v) );
    console.log(btree.toString());
});
*/ 
function setup(){
    createCanvas(600, 400);
    textAlign(CENTER);
    noLoop();	//do not loop draw function 
}
function draw(){
  
  fill(random(250),random(100),random(255,255));
  ellipse(1*60+40,random(50),30);

  var btree = new BTree();
  var a1 = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20];
  //var a2 = [4,2,7,1,5,3,8];
  var a = a1;
    a.forEach(function(v) {
        // console.log('----------------------------------');
        //console.log('ADDING ' + v + ' TO TREE');
        // console.log('');
        btree.add(v);
        //ellipse(1*60+40,random(50),30);
       // console.log(btree.toString());
    });
  
    console.log(btree.toString());
    /*a.forEach(function(v) {
        console.log('----------------------------------');
        console.log('REMOVING ' + v + ' FROM TREE');
        console.log('');
        console.assert( btree.remove(v) );
        console.log(btree.toString());
    });*/


  /*for(let i=0; i<6;i++){
    fill(random(250),random(100),random(255,255));
    ellipse(i*60+40,random(50),30);
  }

}*/
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
