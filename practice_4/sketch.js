function setup(){
    var width = 250;
    var height = 200; 
    createCanvas(width,height);
    background(0);
    for (var x = 0; x < width; x += width / 10) {
        for (var y = 0; y < height; y += height / 5) {
            stroke(125, 125, 125); 
            strokeWeight(1); 
            line(x,0,x,height);
            line(0,y,width,y);
        }
    }
    var data = [];
    data=[
        [40 ,70] ,
        [70 ,130] ,
        [90 ,40] ,
        [110 , 100] ,
        [140 ,110] ,
        [160 , 100]
    ];
    /*data=[
        [40 ,70] ,
        [70 ,130] ,
        [90 ,40] ,
        [110 , 100] ,
        [140 ,110] ,
        [160 , 100] ,
        [150 , 30]
    ];*/
    /*data.push([106,189]);
    data.push([6,114]);
    data.push([90,102]);
    data.push([21,84]);
    data.push([84,138]);
    data.push([5,150]);
    data.push([148,85]);
    data.push([181,45]);
    data.push([161,29]);
    data.push([158,120]);*/
    //console.log(data);
    
    var point = [140 ,90];
    for(let i=0;i<data.length;i++){
        fill(255, 255, 255); 
        textSize(8);
        text(data[i][0] + ',' + data[i][1], data[i][0] + 5, height - data[i][1]);//200-y para q se dibuje aproximadamente 
    }
    text(140+ ',' + 90, 140+ 5, height - 90);//200-y para q se dibuje aproximadamente 
    /*for(let i=0; i<12;i++){
        var x = Math.floor(Math.random() * height);
        var y = Math.floor(Math.random() * height); 
        data.push([x,y]);
        fill(255, 255, 255);
        //circle(x,height-y,7); //200-y para q se dibuje apropiadamente 
        textSize(8);
        text(x + ',' + y, x + 5, height - y);//200-y para q se dibuje aproximadamente        
    }*/
    //console.log(data)
    var root = build_kdtree(data);
    console.log(root); 
    console.log("digraph G { \n" + generate_dot(root)+ "}");
    console.log("Altura del arbol: "+getHeight(root));   
    console.log("punto a consultar: "+point);
    console.log("Closet point brute force: "+closest_point_brute_force(data, point));
    console.log("naive closest point: "+naive_closest_point(root, point));
}