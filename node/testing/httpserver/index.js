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
