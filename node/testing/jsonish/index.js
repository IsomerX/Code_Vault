const fs = require("fs");

const data = {
    name: "dhruv",
    age: 19,
    status: "awesome",
};

const jsonData = JSON.stringify(data);
console.log(jsonData);

fs.writeFileSync("data.txt", jsonData);

let readData = fs.readFileSync("data.txt", "utf-8");

const w = JSON.parse(readData);

console.log(w);
