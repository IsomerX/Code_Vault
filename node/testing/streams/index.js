const fs = require("fs");
const http = require("http");

const server = http.createServer();

server.on("request", (req, res) => {
    // fs.readFile("input.txt", (err, data) => {
    //     if (err) return console.error(err);
    //     res.end(data.toString());
    // });

    const readable = fs.createReadStream("input.txt");

    // readable.on("data", (chunk) => {
    //     res.write(chunk);
    // });
    // readable.on("end", () => {
    //     res.end();
    // });
    // readable.on("error", (err) => {
    //     console.error(err);
    // });

    readable.pipe(res)
});

server.listen(8080, "localhost");