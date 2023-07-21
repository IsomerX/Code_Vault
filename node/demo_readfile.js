<<<<<<< HEAD
var http = require("http");
var fs = require("fs");

http.createServer(function (req, res) {
    fs.readFile("winter.html", function (err, data) {
        res.writeHead(200, { "Content-Type": "text/html" });
        res.write(data);
        return res.end();
    });
}).listen(8080);
=======
var http = require("http");
var fs = require("fs");

http.createServer(function (req, res) {
    fs.readFile("winter.html", function (err, data) {
        res.writeHead(200, { "Content-Type": "text/html" });
        res.write(data);
        return res.end();
    });
}).listen(8080);
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
