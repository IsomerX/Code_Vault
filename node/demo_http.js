<<<<<<< HEAD
var http = require("http");
var url = require('url');

http.createServer(function (req, res) {
    res.writeHead(200, { "Content-Type": "text/html" });
    var q = url.parse(req.url, true).query;
    var txt = q.year + " " + q.month;
    // res.write(req.url);
    res.end(txt);
}).listen(8080);
=======
var http = require("http");
var url = require('url');

http.createServer(function (req, res) {
    res.writeHead(200, { "Content-Type": "text/html" });
    var q = url.parse(req.url, true).query;
    var txt = q.year + " " + q.month;
    // res.write(req.url);
    res.end(txt);
}).listen(8080);
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
