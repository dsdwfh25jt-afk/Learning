pub mod module;
// taking creds of user and calling get user , nothing done here 
pub fn log_in(credentials: module::Credentials) {
// try to log in user 
    super::database::get_user();
}
