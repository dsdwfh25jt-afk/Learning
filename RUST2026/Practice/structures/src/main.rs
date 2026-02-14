#[derive(Debug)] // due to this able to print entire struct on line 16

struct Account {
    is_active : bool ,
    user_name : String , 
    balance : i64 , 
}

fn main() {
    let user1 = Account { // use CammelCase on Structures
        is_active : true,
        user_name : String::from("user_name_abc"),
        balance : 712125,
    };

    println!("This is user1 {:?}",user1);

    println!("This is user1 is acitve : {}",user1.is_active);
    println!("This is user1 user name : {}",user1.user_name);
    println!("This is user1 balance   : {}",user1.balance);
}
