#[derive(Debug)] // trait 
struct User { 
    active: bool,
    username: String,
    email: String,
    sign_in_count: u64,
}

fn main() {
    // to change data fields the instance must be mutable 
    // rust dont allows to mark certain feilds as mutable 
    let user1 = User {
        active: true,
        username: String::from("username123"),
        email: String::from("useremail@xyz.com"),
        sign_in_count: 1,
    };
    // using dot operator to access the data from user1 
    println!("{}",user1.username); 
    // we can print full struct in ordered way from the line below 
    println!("{:#?}",user1); // we can use coz of #[derive(Debug)] this 
} 