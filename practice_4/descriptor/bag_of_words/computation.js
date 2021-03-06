//https://github.com/browserify/browserify
//browserify practice_4/descriptor/bag_of_words/computation.js  > practice_4/descriptor/bag_of_words/computation_bundle.js
//browserify -t brfs practice_4/descriptor/bag_of_words/computation.js  > practice_4/descriptor/bag_of_words/computation_bundle.js
//bag of word --> https://github.com/techfort/mimir

//var loc = window.location.pathname;
//var dir = loc.substring(0, loc.lastIndexOf('/'));
//console.log(loc)

// *** llamando a las funciones que me generan la bolsa de palabras ***
var mimir = require('./index'),
    bow = mimir.bow,
    dict = mimir.dict;


console.log('\n---------- Bolsa de Palabras -----------------\n');

// *** leemos cada archivo mail y se coloca como un elemento de la lista ***
var fs = require("fs");
var path = require("path");

const base_text_path = "../../base_datos/mails/"
var filenames = fs.readdirSync(path.join(__dirname, base_text_path))

// *** leyendo la data ***
var body_mails = []
var spam_mails = []
for (const file in filenames) {
    if (filenames[file].slice(0, 5) == "spmsg") {
        spam_mails.push("Class B") // es spam = Clase B
    } else {
        spam_mails.push("Class A") // no es spam = Clase A
    }
    ;
    text = fs.readFileSync(path.join(__dirname, base_text_path + filenames[file])).toString('utf-8');
    email_body = text.split("\n")[2]; // la 3ra linea contiene el cuerpo principal del mensaje
    body_mails.push(email_body)
}
//console.log(body_mails)
//console.log(spam_mails)


// *** calculando universo de palabras ***
var vocabulary = dict(body_mails); //vocabulario
//console.log(bow(body_mails[25], vocabulary));
//console.log(bow(body_mails[25], vocabulary).reduce((a, b) => a + b, 0));

// *** calculando la bolsa de palabras (bow) para cada email ***
var bow_list = []
for (const i in body_mails) {
    bow_list.push(bow(body_mails[i], vocabulary))
}
//console.log(bow_list);


// *** MDS - Dimensionality reduction ***
druid = require("@saehrimnir/druidjs")
let matrix = druid.Matrix.from(bow_list); //matriz (# documentos , # palabras en el vocabulario calculado)
console.log(matrix);

// Dimensionality reduction (dr)
var new_dimensions = 2
my_dr = new druid.MDS(matrix, new_dimensions)
var bow_all_dr = my_dr.transform().to2dArray // computamos la reduccion de dimensionalidad y obtenemos un vector de 2 dimensiones

var all_mails_output_list = []
for (i in bow_all_dr) {
    var one_mail = []
    one_mail.push(spam_mails[i]);
    for (let j = 0; j < new_dimensions; j++) {
        one_mail.push(bow_all_dr[i][j]);
    }
    all_mails_output_list.push(one_mail)
}


// ***  Obtenemos la salida final de la lista para el uso en KDTree y KNN
// Formato [class(0:no_spam, 1:spam),dimension1,dimension2] --> [[1,2.234,53.23124], [2,123.1234,123,4.123], ..]
console.log(all_mails_output_list)


// write JSON string to a file
const data = JSON.stringify(all_mails_output_list);
fs.writeFile('final_spam_dr_2d.json', data, (err) => {
    if (err) {
        throw err;
    }
    console.log("JSON data is saved.");
});





