#[derive(Debug)]
struct User {
    username: String,
    email: String,
}

// this funnction will take strings and return 
fn build_user(username:String , email:String) -> User {
    User {
        // username : username,
        // email: email,

        // above fields repeatative so we will ignore these 
        // and write the below ones to avoid reapeatative ones 

        username,
        email,
    }
}

fn main() {
    let user1 = build_user(
        String::from("joe"),
        String::from("joe123@email.com")
    );
    println!("{:#?}",user1) 
}