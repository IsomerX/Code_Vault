<<<<<<< HEAD
var http = require('http');
var dt = require('./firstModule');

http.createServer((req, res) => {
    res.writeHead(200, {'Content-Type': 'text/html'});
    res.end('the current time is: ' + dt.myDateTime());
=======
var http = require('http');
var dt = require('./firstModule');

http.createServer((req, res) => {
    res.writeHead(200, {'Content-Type': 'text/html'});
    res.end('the current time is: ' + dt.myDateTime());
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}).listen(8080);