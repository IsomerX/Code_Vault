<<<<<<< HEAD
var uc = require('upper-case');
var http = require('http')

http.createServer((req,res)=>{
    res.writeHead(200, {'Content-Type':'text/html'});
    res.write(uc.upperCase("this is a sample text"));
    res.end();
}).listen(8080);

// http.createServer(function (req, res) {
//     res.writeHead(200, {'Content-Type': 'text/html'});
//     res.write(uc.upperCase("Hello World!"));
//     res.end();
=======
var uc = require('upper-case');
var http = require('http')

http.createServer((req,res)=>{
    res.writeHead(200, {'Content-Type':'text/html'});
    res.write(uc.upperCase("this is a sample text"));
    res.end();
}).listen(8080);

// http.createServer(function (req, res) {
//     res.writeHead(200, {'Content-Type': 'text/html'});
//     res.write(uc.upperCase("Hello World!"));
//     res.end();
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
//   }).listen(8080);