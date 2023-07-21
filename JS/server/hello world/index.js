const http = require("http");
const fs = require("fs");
const server = http.createServer((req, res) => {
    const file = fs.readFileSync("index.html");
    res.end(file);
});

server.listen(3002, "localhost", () => {
    console.log("Server is running on port 3002");
});
