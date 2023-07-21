<<<<<<< HEAD
const express = require('express');

const app = express();

app.get("/", (req, res) => {
    res.send('hey hey');
})

app.listen(1000, () => {
    console.log("listening at 1000");
=======
const express = require('express');

const app = express();

app.get("/", (req, res) => {
    res.send('hey hey');
})

app.listen(1000, () => {
    console.log("listening at 1000");
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
})