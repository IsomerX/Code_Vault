var http = require("http");
var fs = require("fs");
var url = require("url");

http.createServer((req, res) => {
    var q = url.parse(req.url, true);

    var adr = "." + q.pathname + ".html";
    if (q.pathname == "/") adr = "index.html";
    console.log(adr);
    fs.readFile(adr, (err, data) => {
        if (err) {
            res.writeHead(404, {
                "Content-Type": "text/html",
            });
            res.write("Error file not found");
            return res.end();
        }
        res.writeHead(200, {
            "Content-Type": "text/html",
        });
        res.write(data);
        return res.end();
    });
}).listen(8080);
