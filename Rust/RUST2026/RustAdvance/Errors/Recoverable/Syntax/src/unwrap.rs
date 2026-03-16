use std::fs::File;

pub fn unwrap_method() {
    let greetings = File::open("hello.txt").unwrap();
    // open fn return result type 
    // and if the result is Ok varient unwrap will return the value 
    // inside the Ok 
    // if the result is error then it will call panic! 
}