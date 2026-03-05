// everything is private by defoult in rust : 
// Structs , enums , functions even fields like username & password from struct 

mod database{
		// checked user status 
		pub enum Status{
    		Connected,
    		Enterepted,
		}

		// dummy function which only returns status-> connnected 
		pub fn connect_to_database() -> Status {
    		// connect to database ...
    		Status::Connected
		}

		// doing nothing till now ,dummy function
		pub fn get_user() {
    // fetch the user from database and return 
		}	
}

pub mod auth_utilis {
    
		// taking creds of user and calling get user , nothing done here 
		pub fn log_in(credentials: module::Credentials) {
    		// try to log in user 
    		super::database::get_user();
		}
    pub mod module {
        // created a user info structure 
        pub struct  Credentials {
            pub username: String,
            pub password: String,
        }
    }
}

// taking user creds and checking wheter it is connected or not 
pub fn authenticate(credentials:auth_utilis::module::Credentials) {
    if let database::Status::Connected = database::connect_to_database() {
        println!("Authentication Succesfull");
    }else {
        println!("Authentication Failed ... !!!");
    }
}
