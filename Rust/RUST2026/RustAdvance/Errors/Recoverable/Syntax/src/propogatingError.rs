use std::fs::File;
use std::io::{self,Read};
use std::fs;

// this function will return the error type to the calling code 
// which mean if we call this function in main 
// this will give error to main function and main will handle 
// according to itself 

pub fn read_username() -> Result<String , io::Error> { // returning results type String (ok) or error 
    let username_file = File::open("hello.exe"); 

    let mut usernames = match username_file {
        Ok(file) => file, // file open ok 
        Err(e) => return Err(e), // not open return error 
    }; 

    let mut user_name = String::new();

    match usernames.read_to_string(&mut user_name) {
        Ok(_) => Ok(user_name), // if able to read ok
        Err(e) => Err(e), // if not return error 
    }  // here we not puted ; so it will return the value 
}

// this function do same the read_username does
pub fn operator_shortcut() -> Result<String , io::Error>{
    let mut username_file = File::open("hello.txt")?;
    let mut user_name = String::new();
    username_file.read_to_string(&mut user_name)?;
    Ok(user_name)
}
// this function do same the read_username does
pub fn operator_shortcut1() -> Result<String , io::Error> {
    let mut user_name = String::new();
    File::open("hello.txt")?.read_to_string(&mut user_name)?;
    
    Ok(user_name)
}

pub fn build_in_tools() -> Result<String, io::Error> { 
    fs::read_to_string("hello.txt")
}