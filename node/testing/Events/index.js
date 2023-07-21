<<<<<<< HEAD
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

=======
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

>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
event.emit("check", 200, "google.com");