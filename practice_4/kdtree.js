k = 2;
class Node{ 
    constructor(point, axis){
        this.point = point;    // clase punto
        this.left = null;   // hijo izquierdo
        this.right = null;  //hijo derecho
        this.axis = axis; // saber en que ejes estas
    }
}
function getHeight(node) {
    if (node === null){
        return 0;
    }
    // find the height of each subtree
    var lh = getHeight(node.left);
    var rh = getHeight(node.right);
    return 1 + max(lh,rh);
}
function generate_dot(node){
    if (node === null){
        return "";
    }
    var tmp = '';
    if (node.left != null){
        tmp += '"' + node.point.toString() + '"' + ' -> ' + '"' + node.left.point.toString() + '"' + ';\n';
        tmp += generate_dot(node.left);
    }
    if (node.right != null){
        tmp += '"' + node.point.toString() + '"' + ' -> ' + '"' + node.right.point.toString() + '"' + ';\n';
        tmp += generate_dot(node.right);
    }
    //console.log(tmp);
    return tmp;
}
function build_kdtree(points, depth = 0){
    var n = points.length;
    var axis = depth % k;
    if (n <= 0){return null;}
    if (n == 1){return new Node(points[0], axis)}
    var median = Math.floor(points.length / 2);
    // sort by the axis
    points.sort(function(a, b){return a[axis] - b[axis];});
    //console.log(points);
    var left = points.slice(0, median);
    var right = points.slice(median + 1);
    //console.log(right);
    var node = new Node(points[median].slice(0, k), axis);
    node.left = build_kdtree(left, depth + 1);
    node.right = build_kdtree(right, depth + 1);
    return node;
}
function closest_point_brute_force(points, point){
    var distance = null;
    var best_distance = null;
    var best_point = null;
    for(let i = 0; i < points.length; i++){
        distance = distanceSquared(points[i], point);
        //console.log(distance);
        if(best_distance === null || distance < best_distance){
            best_distance = distance;
            //best_point = { 'point': points[i], 'distance': distance }
            best_point = points[i];
        }
    }
    return best_point;
}
function naive_closest_point(node, point, depth = 0, best = null){
    //algorithm
    //1. best = min(distance(point, node.point), best)
    //2. chose the branch according to axis per level
    //3. recursevely call by branch chosed
    if (node === null)
        return best;
    var axis = depth % k;
    var next_best = null; //next best point
    var next_branch = null; //next node brach to look for
    if (best === null || (distanceSquared(best, point) > distanceSquared(node.point, point)))
        next_best = node.point;
    else
        next_best   = best;
    if (point[axis] < node.point[axis])
        next_branch = node.left
    else
        next_branch = node.right
    return  naive_closest_point(next_branch, point, depth +1, next_best);
}
function distanceSquared(point1, point2){ 
    var distance = 0;
    for (var i = 0; i < k; i++)
    console.log("Points: "+point1[i] +","+ point2[i]);
    distance += Math.pow((point1[i] - point2[i]), 2);
    return Math.sqrt(distance); 
}
//Devuelve el punto mas cercano al de consulta.
function closet_point(node, point, depth=0){
    if(node==null) return null;
    console.log("closet_point: "+ node.point +":"+point);
    //var next_branch = null;
    //var otherBranch = null;
    if(point[parseInt(depth)%k]<node.point[parseInt(depth)%k]){
        next_branch = node.left;
        otherBranch = node.right;
    }else{
        next_branch = node.right;
        otherBranch = node.left;
    }
    if(next_branch != null){
        console.log(next_branch);
        //console.log("point: "+point);
        //console.log(parseInt(depth)+1);
        var temp= closet_point(next_branch,point,parseInt(depth)+1);
        console.log("temp: "+temp);
        if(temp!=null){
            var best = closest(point,temp,node);
            console.log("best: "+best);
            //console.log("PUNTOS distanceSquared: "+point +":"+best.point);
            var radiusSquared= distanceSquared(point,best.point);
            var dist= point[depth%k]-node.point[parseInt(depth)%k];
            if(radiusSquared>= dist*dist){
                temp= closet_point(otherBranch,point,parseInt(depth)+1);
                best= closest(point,temp,best);
            } 
        }
        return best; 
    }
}
function closest(n0, n1, target) {
    if (n0 == null) return n1;
    if (n1 == null) return n0;
    console.log("closest: "+ n0.point +","+n1.point);
    let d1 = distanceSquared(n0.point, target);
    let d2 = distanceSquared(n1.point, target);
    if (d1 < d2)
        return n0;
    else
        return n1;
}
function range_query_circle(node, center, radio, queue,depth=0){

}
function range_query_rec(node, center, radio, queue,depth=0){
    
}
//Paul aqui tu implementacion del KNN usar cola de prioridades
function KNN(){
    
}
