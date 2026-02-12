// this is the practice and reminder program which is created to recall all the basic things that i have learned in past 

use std::io; // adding standard input output library
fn main() {
    println!("Hello, world!"); // printing statement 

    let mut abc = String::new(); // created new empty string called abc which is mutable 

    io::stdin()
        .read_line(&mut abc)
        .expect("Failed to read line");

    println!("Text : {}",abc);
}
