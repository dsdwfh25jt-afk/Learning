use std::io;

fn main() {

    let a = [1,2,3,4,5];
    println!("Please enter an array index : ");

    let mut index = String::new();

    io::stdin() 
        .read_line(&mut index)
        .expect("falied to read line");

    let index : usize = index 
        .trim()
        .parse()
        .expect("Index Entered was not a number >>>");

    let element = a[index];

    println!("The value of element at Index {index} is : {element}");


}