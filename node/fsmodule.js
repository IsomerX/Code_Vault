// import fs 
const fs = require('fs');

a = fs.readFile('output.txt', 'utf-8',(err, data)=>{
    if(err) throw err;
    console.log("hadd hai");
});

b = fs.writeFileSync('output.txt', 'Hello Node.js', (err)=>{
    if(err) throw err;
    console.log('File written successfully');
});

console.log(a)