<<<<<<< HEAD
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

=======
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

>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
console.log(a)