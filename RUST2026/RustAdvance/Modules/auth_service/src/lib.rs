// everything is private by defoult in rust : 
// Structs , enums , functions even fields like username & password from struct 

mod database; 

pub mod auth_utilis;

// taking user creds and checking wheter it is connected or not 
pub fn authenticate(credentials:auth_utilis::module::Credentials) {
    if let database::Status::Connected = database::connect_to_database() {
        println!("Authentication Succesfull");
    }else {
        println!("Authentication Failed ... !!!");
    }
}
