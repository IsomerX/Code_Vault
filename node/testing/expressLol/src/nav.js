const express = require("express");
const path = require('path')
// const fs = require("fs");
const app = express();

let port = 2000;

// let homePage = fs.readFileSync("./index.html", "utf-8");

const staticPath = path.join(__dirname, "../public")

app.use(express.static(staticPath))

app.get("/about", (req, res) => {
    res.send("homePage");
});

app.listen(port, () => {
    console.log(`you can visit http://localhost:${port} to view the project`);
});
