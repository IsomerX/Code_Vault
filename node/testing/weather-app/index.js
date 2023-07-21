const http = require("http");
const fs = require("fs");
const requests = require("requests");

const homeFile = fs.readFileSync("index.html", "utf-8");

const replaceVal = (tempVal, val) => {
    let temp = tempVal.replace("{%tempVal%}", val.main.temp);
    temp = temp.replace("{%tempMin%}", val.main.temp_min);
    temp = temp.replace("{%tempMax%}", val.main.temp_max);
    return temp;
};

const server = http.createServer((req, res) => {
    if (req.url === "/") {
        requests(
            "https://api.openweathermap.org/data/2.5/weather?q=Delhi&appid=d98bc7b22f1477fc6f99346949bd4155"
        )
            .on("data", (chunk) => {
                const d = JSON.parse(chunk);
                const arra = [d];
                // console.log(arra[0].main.temp);
                const realTime = arra
                    .map((val) => replaceVal(homeFile, val))
                    .join("");
                res.write(realTime);
            })
            .on("end", (err) => {
                if (err) return console.error(err);

                res.end();
            });
    }
});

server.listen(8000, "localhost");
