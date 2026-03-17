use std::fs::File;
use std::io::{self,Read};

// this function will return the error type to the calling code 
// which mean if we call this function in main 
// this will give error to main function and main will handle 
// according to itself 

pub fn read_username() -> Result<String , io::Error> { // returning results type String (ok) or error 
    let username_file = File::opne("hello.exe"); 

    let usernames = match username_file {
        Ok(file) => file, // file open ok 
        Err(e) => return Err(e), // not open return error 
    }; 

    let mut user_name = String::new();

    match usernames.read_to_string(&mut user_name) {
        Ok(_) => Ok(username), // if able to read ok
        Err(e) => Err(e), // if not return error 
    }  // here we not puted ; so it will return the value 
}