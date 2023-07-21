var nodemailer = require("nodemailer");

var transporter = nodemailer.createTransport({
    service: "gmail",
    auth: {
        user: "isomerx2@gmail.com",
        pass: "fruits123",
    },
});

var mailOptions = {
    from: "isomerx2@gmail.com",
    to: "dhruvbakshi12343@gmail.com",
    subject: "Sending Email using Node.js",
    text: "That was easy!",
};

transporter.sendMail(mailOptions, function (error, info) {
    if (error) {
        console.log(error);
    } else {
        console.log("Email sent: " + info.response);
    }
});
