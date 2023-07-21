use std::io::stdin;

struct User {
    username: String,
    password: String,
    books_borrowed: Vec<String>,
    credits: i32,
}

impl User{
    fn new(username: String, password: String) -> Self {
        User {
            username,
            password,
            books_borrowed: Vec::new(),
            credits: 0,
        }
    }
} 

fn main() {
    let u1 = User::new(String::from("user1"), String::from("pass1"));

    let mut line = String::new();

    let username = stdin().read_line(&mut line).unwrap();

    println!("{}, {}", line, username);
    for ch in line.chars() {
        println!("{}", ch);
    }

    println!("{} - {}", u1.username, u1.password);
}
