<<<<<<< HEAD
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
=======
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
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
