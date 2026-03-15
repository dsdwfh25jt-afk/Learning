// everything is private by defoult in rust : 
// Structs , enums , functions even fields like username & password from struct 

mod database; 

pub mod auth_utilis;

use database::Status;
use auth_utilis::module;
// taking user creds and checking wheter it is connected or not 
pub fn authenticate(credentials:module::Credentials) {
    if let Status::Connected = database::connect_to_database() {
        println!("Authentication Succesfull");
    }else {
        println!("Authentication Failed ... !!!");
    }
}
