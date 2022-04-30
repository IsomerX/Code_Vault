var http = require("http");
var url = require('url');

http.createServer(function (req, res) {
    res.writeHead(200, { "Content-Type": "text/html" });
    var q = url.parse(req.url, true).query;
    var txt = q.year + " " + q.month;
    // res.write(req.url);
    res.end(txt);
}).listen(8080);
