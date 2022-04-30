const express = require('express');

const app = express();

app.get("/", (req, res) => {
    res.send('hey hey');
})

app.listen(1000, () => {
    console.log("listening at 1000");
})