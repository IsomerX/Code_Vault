<<<<<<< HEAD
const http = require("http");
const url = require("url");

const server = http.createServer((request, response) => {
    // console.log(request);
    console.log(request.url);
    if (request.url === "/") response.end("hello world");
    else if (request.url === "/about") response.end("this is the other side");
    else {
        response.writeHead(404, {"content-type": "text/html"});
        response.end("<h1>404 error</h1>");
    }
});

server.listen(666, "localhost", () => {
    console.log("listening to port no 666");
});
=======
const http = require("http");
const url = require("url");

const server = http.createServer((request, response) => {
    // console.log(request);
    console.log(request.url);
    if (request.url === "/") response.end("hello world");
    else if (request.url === "/about") response.end("this is the other side");
    else {
        response.writeHead(404, {"content-type": "text/html"});
        response.end("<h1>404 error</h1>");
    }
});

server.listen(666, "localhost", () => {
    console.log("listening to port no 666");
});
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
