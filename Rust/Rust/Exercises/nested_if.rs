use std::io;

fn main() {
    let mut input = String::new();
    println!("Please Enter an Number : ");
    io::stdio()
        .read_line(&mut input)
        .expect("Failed to read the line");
    let x:i32 = input.trim().parse().expect("please enter a number ");

    if x < 0 {
        println!("The number is less than zero ");
    }else if x == 0 {
        println!("The number is zero");
    }else {
        println!("The number is greater than zero");
    }



}