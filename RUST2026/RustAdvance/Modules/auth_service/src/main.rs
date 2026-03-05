use auth_service::authenticate;
use auth_service::Credentials;
fn main() {
    let user_credentials = Credentials{
        username : String::from("user12345678"),
        password : String::from("12345678"),
    };  

    authenticate(user_credentials);
    println!("Hello, world!");
}
