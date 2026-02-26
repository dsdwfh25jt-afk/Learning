struct User {
    active: bool,
    username: String ,
    email: String ,
    sign_in_count: u64,
}

fn main () { 
    let user1 = User {
        active : true,
        username : String::from("unknownuser1"),
        email : String::from("unknownuser123@gmail.com"),
        sign_in_count : 1 ,
    };


    let user2 = User {
        active: user1.active, // copied data due to stack alloc 
        username: user1.username, // transffered ownership of user1 username due to heap alloc 
        // due to that the user1 username no longer accesable 
        email:String::from("newusername123@gmail.com"),
        sign_in_count: user1.sign_in_count,
    };

    let user3 = User {
        username : String::from("chaman"),
        ..user2 // this will copy entire struct user2 
        // and from here user2 mail no longer accesable 
    };

}