<<<<<<< HEAD
let http = require("http");
let url = require("url");

let server = http.createServer((req, res)=>{
    res.writeHead(200, {
        'Content-Type': 'text/html'
    });
    let q = url.parse(req.url, true).query;
    res.write(q.year + " " + q.month);
    res.end();
});

=======
let http = require("http");
let url = require("url");

let server = http.createServer((req, res)=>{
    res.writeHead(200, {
        'Content-Type': 'text/html'
    });
    let q = url.parse(req.url, true).query;
    res.write(q.year + " " + q.month);
    res.end();
});

>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
server.listen(8080);