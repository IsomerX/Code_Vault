<<<<<<< HEAD
const http = require("http");
const fs = require("fs");
const url2 = require("url");

const server = http.createServer((request, response) => {
    // console.log(request);
    console.log(request.url);
    if (request.url === "/") response.end("hello world");
    else if (request.url.includes("/api")) {
        fs.readFile(`${__dirname}/userapi.json`, 'utf-8', (err, data) => {
            // console.log(data);
            const obj = JSON.parse(data);
            const rr = new url2.URL(`localhost:666${request.url}`);
            console.log(rr.searchParams.toString());
            response.end(data);

        });

    } else {
        response.writeHead(404, { "content-type": "text/html" });
        response.end("<h1>404 error</h1>");
    }
});

server.listen(666, "localhost", () => {
    console.log("listening to port no 666");
});
=======
const http = require("http");
const fs = require("fs");
const url2 = require("url");

const server = http.createServer((request, response) => {
    // console.log(request);
    console.log(request.url);
    if (request.url === "/") response.end("hello world");
    else if (request.url.includes("/api")) {
        fs.readFile(`${__dirname}/userapi.json`, 'utf-8', (err, data) => {
            // console.log(data);
            const obj = JSON.parse(data);
            const rr = new url2.URL(`localhost:666${request.url}`);
            console.log(rr.searchParams.toString());
            response.end(data);

        });

    } else {
        response.writeHead(404, { "content-type": "text/html" });
        response.end("<h1>404 error</h1>");
    }
});

server.listen(666, "localhost", () => {
    console.log("listening to port no 666");
});
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
