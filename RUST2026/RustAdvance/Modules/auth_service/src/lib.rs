// everything is private by defoult in rust : 
// Structs , enums , functions even fields like username & password from struct 

// created a user info structure 
pub struct  Credentials {
    pub username: String,
    pub password: String,
}

// checked user status 
enum Status{
    Connected,
    Enterepted,
}

// dummy function which only returns status-> connnected 
pub fn connect_to_database() -> Status {
    // connect to database ...
    Status::Connected
}

// doing nothing till now ,dummy function
fn get_user() {
    // fetch the user from database and return 
}

// taking creds of user and calling get user , nothing done here 
fn log_in(credentials:Credentials) {
    // try to log in user 
    get_user()
}

// taking user creds and checking wheter it is connected or not 
pub fn authenticate(credentials:Credentials) {
    if let Status::Connected = connect_to_database() {
        println!("Authentication Succesfull");
    }else {
        println!("Authentication Failed ... !!!");
    }
}