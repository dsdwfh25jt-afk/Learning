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