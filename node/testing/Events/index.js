const EventEmitter = require("events");

const event = new EventEmitter();

event.on('lol', () => {
    console.log("this");
})

event.on('lol', () => {
    console.log("is");
})

event.on('lol', () => {
    console.log("dhruv");
})

event.on("check", (code, msg) => {
    console.log(`status code: ${code} and the page is ${msg}`);
})

event.emit("lol");

event.emit("check", 200, "google.com");