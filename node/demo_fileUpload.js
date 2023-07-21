<<<<<<< HEAD
var http = require("http");
var formidable = require("formidable");
var fs = require("fs");

http.createServer(function (req, res) {
    if (req.url == "/fileupload") {
        var form = new formidable.IncomingForm();
        form.parse(req, function (err, fields, files) {
            var oldpath = files.filetoupload.path;
            var newpath =
                "C:/Users/dbaks/OneDrive/Desktop/store/" +
                files.filetoupload.name;
            fs.rename(oldpath, newpath, function (err) {
                if (err) throw err;
                res.write("File uploaded and moved!");
                res.end();
            });
        });
    } else {
        res.writeHead(200, { "Content-Type": "text/html" });
        res.write(
            '<form action="fileupload" method="post" enctype="multipart/form-data">'
        );
        res.write('<input type="file" name="filetoupload"><br>');
        res.write('<input type="submit">');
        res.write("</form>");
        return res.end();
    }
}).listen(8080);
=======
var http = require("http");
var formidable = require("formidable");
var fs = require("fs");

http.createServer(function (req, res) {
    if (req.url == "/fileupload") {
        var form = new formidable.IncomingForm();
        form.parse(req, function (err, fields, files) {
            var oldpath = files.filetoupload.path;
            var newpath =
                "C:/Users/dbaks/OneDrive/Desktop/store/" +
                files.filetoupload.name;
            fs.rename(oldpath, newpath, function (err) {
                if (err) throw err;
                res.write("File uploaded and moved!");
                res.end();
            });
        });
    } else {
        res.writeHead(200, { "Content-Type": "text/html" });
        res.write(
            '<form action="fileupload" method="post" enctype="multipart/form-data">'
        );
        res.write('<input type="file" name="filetoupload"><br>');
        res.write('<input type="submit">');
        res.write("</form>");
        return res.end();
    }
}).listen(8080);
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
