function calculateDaysBetweenDates(begin, end){
    var beginDate = new Date(begin);
    var endDate = new Date(end);
    var days = Math.round((endDate - beginDate) / (1000 * 60 * 60 * 24));
    return days;
}

function calculateMonthsBetweenDates(begin, end){
    var beginDate = new Date(begin);
    var endDate = new Date(end);
    var months = Math.round((endDate.getFullYear() - beginDate.getFullYear()) * 12 + (endDate.getMonth() - beginDate.getMonth()));
    return months;
}

// check if there is a special character in a string

function hasSpecialCharacter(str){
    var specialChars = new RegExp("[^a-zA-Z0-9]");
    return specialChars.test(str);
}

function verifyPassword(password){
    if (password.length < 6){
        return false;
    }
    return true;
}