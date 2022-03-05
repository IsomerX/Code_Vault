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

server.listen(8080);